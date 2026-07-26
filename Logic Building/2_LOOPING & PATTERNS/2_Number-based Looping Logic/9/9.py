# Q9: Print Fibonacci series up to n terms.
# Input: An integer n
# Output: First n Fibonacci numbers

n = int(input())
a, b = 0, 1
for i in range(n):
    print(a, end=" ")
    a, b = b, a + b
print()
