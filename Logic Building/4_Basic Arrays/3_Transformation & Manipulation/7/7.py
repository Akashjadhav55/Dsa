# Q7: Rotate an array by one position to the left.
# Input: Size n, then n integers
# Output: Left-rotated array

n = int(input())
arr = list(map(int, input().split()))
first = arr[0]
for i in range(n - 1):
    arr[i] = arr[i + 1]
arr[n - 1] = first
print(*arr)
