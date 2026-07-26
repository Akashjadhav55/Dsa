# Q5: Find the difference between the largest and smallest element.
# Input: Size n, then n integers
# Output: Difference (max - min)

n = int(input())
arr = list(map(int, input().split()))
print(max(arr) - min(arr))
