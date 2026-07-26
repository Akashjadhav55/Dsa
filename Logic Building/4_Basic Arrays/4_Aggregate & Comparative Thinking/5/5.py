# Q5: Find elements that are in one array but not in the other.
# Input: Size n and m, two arrays
# Output: Elements only in first array

n = int(input())
a = list(map(int, input().split()))
m = int(input())
b = set(map(int, input().split()))
for x in a:
    if x not in b:
        print(x)
