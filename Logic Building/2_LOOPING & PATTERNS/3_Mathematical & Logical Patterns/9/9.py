# Q9: Print first n terms of an arithmetic progression (a, d).
# Input: First term a and common difference d, and n terms
# Output: First n terms of the AP

a, d, n = map(int, input().split())
for i in range(n):
    print(a + i * d, end=" ")
print()
