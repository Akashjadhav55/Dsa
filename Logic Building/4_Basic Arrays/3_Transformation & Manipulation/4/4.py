# Q4: Replace all even numbers with 1 and all odd with 0.
# Input: Size n, then n integers
# Output: Modified array

n = int(input())
arr = list(map(int, input().split()))
for x in arr:
    print(1 if x % 2 == 0 else 0)
