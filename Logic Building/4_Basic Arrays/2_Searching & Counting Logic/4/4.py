# Q4: Find the last occurrence of a given number.
# Input: Size n, n integers, element x
# Output: Index of last occurrence (-1 if not found)

n = int(input())
arr = list(map(int, input().split()))
x = int(input())
idx = -1
for i in range(len(arr)):
    if arr[i] == x:
        idx = i
print(idx)
