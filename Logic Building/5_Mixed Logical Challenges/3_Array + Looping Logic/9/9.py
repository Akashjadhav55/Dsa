# Q9: Rotate an array by one position to the right.
# Input: Size n, then n integers
# Output: Right-rotated array

n = int(input())
arr = list(map(int, input().split()))
arr = [arr[-1]] + arr[:-1]
print(' '.join(map(str, arr)))
