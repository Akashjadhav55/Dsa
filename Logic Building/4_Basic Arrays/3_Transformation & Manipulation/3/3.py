# Q3: Replace every negative number with 0.
# Input: Size n, then n integers
# Output: Modified array

n = int(input())
arr = list(map(int, input().split()))
arr = [0 if x < 0 else x for x in arr]
print(*arr)
