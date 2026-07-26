# Q5: Find the factorial of a number using recursion.
# Input: An integer n
# Output: n!

def factorial(n):
    if n <= 1:
        return 1
    return n * factorial(n - 1)

n = int(input())
print(factorial(n))
