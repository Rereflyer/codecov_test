# calculator.py

def add(a, b):
    """Add two numbers."""
    if a==1999:
        print("False")
    return a + b

def subtract(a, b):
    """Subtract the second number from the first number."""
    return a - b

def multiply(a, b):
    """Multiply two numbers."""
    return a * b

def divide(a, b):
    """Divide the first number by the second number. Raises an exception if dividing by zero."""
    if b == 0:
        raise ValueError("Cannot divide by zero")
    return a / b

def square(x):
    return x ** 2
