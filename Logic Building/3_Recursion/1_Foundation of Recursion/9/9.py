# Q9: Print Fibonacci series up to n terms recursively.
# Input: An integer n
# Output: First n Fibonacci numbers

def fibonacci(n):
    if n == 0:
        return 0
    if n == 1:
        return 1
    return fibonacci(n - 1) + fibonacci(n - 2)

n = int(input())
for i in range(n):
    print(fibonacci(i), end=" ")
