# Q8: Find the index of the maximum element.
# Input: Size n, then n integers
# Output: Index of maximum element

n = int(input())
arr = list(map(int, input().split()))
print(arr.index(max(arr)))
