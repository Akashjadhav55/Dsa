# Q4: Simulate a simple calculator using switch-case.
# Input: Two numbers and an operator (+, -, *, /)
# Output: Result of the operation

a = float(input())
op = input()
b = float(input())
if op == '+':
    print(a + b)
elif op == '-':
    print(a - b)
elif op == '*':
    print(a * b)
elif op == '/':
    if b != 0:
        print(a / b)
    else:
        print("Cannot divide by zero")
else:
    print("Invalid operator")
