# Q7: Find common elements between two arrays.
# Input: Size n and m, two arrays
# Output: Common elements

n = int(input())
a = list(map(int, input().split()))
m = int(input())
b = list(map(int, input().split()))
common = []
for v in a:
    if v in b and v not in common:
        common.append(v)
print(' '.join(map(str, common)))
