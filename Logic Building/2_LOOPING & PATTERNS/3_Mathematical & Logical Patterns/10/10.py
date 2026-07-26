# Q10: Print first n terms of a geometric progression (a, r).
# Input: First term a and common ratio r, and n terms
# Output: First n terms of the GP

a, r, n = map(int, input().split())
term = a
for i in range(n):
    print(term, end=" ")
    term *= r
print()
