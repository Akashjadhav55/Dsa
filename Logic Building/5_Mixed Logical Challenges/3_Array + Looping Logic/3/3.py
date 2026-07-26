# Q3: Print all unique elements from an array.
# Input: Size n, then n integers
# Output: Unique elements

n = int(input())
arr = list(map(int, input().split()))
result = []
for i in range(n):
    if arr.count(arr[i]) == 1:
        result.append(arr[i])
print(' '.join(map(str, result)))
