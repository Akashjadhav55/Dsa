# Q9: Find the index of the minimum element.
# Input: Size n, then n integers
# Output: Index of minimum element

n = int(input())
arr = list(map(int, input().split()))
print(arr.index(min(arr)))
