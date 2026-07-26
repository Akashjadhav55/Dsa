# Q6: Count how many elements are even at an even index.
# Input: Size n, then n integers
# Output: Count

n = int(input())
arr = list(map(int, input().split()))
count = sum(1 for i, v in enumerate(arr) if i % 2 == 0 and v % 2 == 0)
print(count)
