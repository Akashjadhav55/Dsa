# Q9: Generate Fibonacci series up to N using recursion.
# Input: An integer N
# Output: Fibonacci series up to N

def fibonacci(n):
    if n <= 1:
        return n
    return fibonacci(n - 1) + fibonacci(n - 2)

limit = int(input())
i = 0
result = []
while True:
    val = fibonacci(i)
    if val > limit:
        break
    result.append(val)
    i += 1
print(' '.join(map(str, result)))
