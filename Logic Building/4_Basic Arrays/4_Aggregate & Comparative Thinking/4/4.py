# Q4: Find the common elements between two arrays.
# Input: Size n and m, two arrays
# Output: Common elements

n = int(input())
a = set(map(int, input().split()))
m = int(input())
b = list(map(int, input().split()))
for x in b:
    if x in a:
        print(x)
        a.remove(x)
