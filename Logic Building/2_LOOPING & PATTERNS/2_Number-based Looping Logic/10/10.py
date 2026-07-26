# Q10: Print sum of first n terms of Fibonacci series.
# Input: An integer n
# Output: Sum of first n Fibonacci numbers

n = int(input())
a, b = 0, 1
total = 0
for i in range(n):
    total += a
    a, b = b, a + b
print(total)
