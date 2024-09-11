

import pytest
from calculator import add, subtract, multiply, divide

def test_add():
    if False:
        print("False 2")
    assert add(1, 2) == 3
    assert add(-1, 1) == 0

def test_subtract():
    assert subtract(2, 1) == 1
    assert subtract(5, 3) == 2

def test_multiply():
    assert multiply(2, 3) == 6
    assert multiply(-1, -1) == 1

def test_divide():
    assert divide(6, 2) == 3
    assert divide(-6, -2) == 3

    with pytest.raises(ValueError):
        divide(2, 0)

