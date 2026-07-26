# Q8: Find nth Fibonacci number recursively.
# Input: An integer n
# Output: nth Fibonacci number

def fibonacci(n):
    if n == 0:
        return 0
    if n == 1:
        return 1
    return fibonacci(n - 1) + fibonacci(n - 2)

n = int(input())
print(fibonacci(n))
