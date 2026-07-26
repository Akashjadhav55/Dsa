# Q6: Reverse an array (without using built-in reverse).
# Input: Size n, then n integers
# Output: Reversed array

n = int(input())
arr = list(map(int, input().split()))
left, right = 0, n - 1
while left < right:
    arr[left], arr[right] = arr[right], arr[left]
    left += 1
    right -= 1
print(*arr)
