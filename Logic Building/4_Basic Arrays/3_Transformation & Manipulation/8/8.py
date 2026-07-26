# Q8: Rotate an array by one position to the right.
# Input: Size n, then n integers
# Output: Right-rotated array

n = int(input())
arr = list(map(int, input().split()))
last = arr[n - 1]
for i in range(n - 1, 0, -1):
    arr[i] = arr[i - 1]
arr[0] = last
print(*arr)
