#!/bin/bash

CODECOV_URL="https://codecov3.enflame.cn"
CODECOV_TOKEN="c7e49161-6fc2-4f35-a0ea-89ffe33f7e17"

# Function to check if a command exists, if not, install it
function install_if_not_exists() {
  command_name=$1
  package_name=$2
  if ! command -v $command_name &> /dev/null; then
    echo "$command_name 不存在，正在安装..."
    sudo apt install $package_name
  else
    echo "$command_name 已安装"
  fi
}

# 1. 检查并安装 pytest 和 pytest-cov
install_if_not_exists lcov lcov

# 编译
cmake -S . -B cmake_build
make -C cmake_build
cd cmake_build
./test_math_function

# 运行 pytest 并生成覆盖率报告
lcov --capture --directory cmake_build --output-file coverage.info

# 3. 获取当前仓库的最新 commit ID
commit_id=$(git rev-parse HEAD)

# 安装 codecov（如果不存在）
install_if_not_exists codecov codecov-cli

# 执行 codecov 上传命令
codecovcli -v -u ${CODECOV_URL} upload-process -n multi_coverage_runner -t ${CODECOV_TOKEN} -B main -C $commit_id -f coverage.info --git-service gitlab_enterprise
