# Q10: Copy one array to another manually.
# Input: Size n, then n integers
# Output: Copied array

n = int(input())
arr = list(map(int, input().split()))
copy = []
for x in arr:
    copy.append(x)
for x in copy:
    print(x)
