# Q1: Find the maximum and minimum element in an array.
# Input: Size n, then n integers
# Output: Maximum and minimum

n = int(input())
arr = list(map(int, input().split()))
print("Maximum:", max(arr))
print("Minimum:", min(arr))
