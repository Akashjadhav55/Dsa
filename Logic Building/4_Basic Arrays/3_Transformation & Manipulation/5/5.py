# Q5: Swap the first and last elements of the array.
# Input: Size n, then n integers
# Output: Modified array

n = int(input())
arr = list(map(int, input().split()))
arr[0], arr[n - 1] = arr[n - 1], arr[0]
print(*arr)
