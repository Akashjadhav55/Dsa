# Q4: Reverse an array in-place.
# Input: Size n, then n integers
# Output: Reversed array

n = int(input())
arr = list(map(int, input().split()))
arr.reverse()
print(' '.join(map(str, arr)))
