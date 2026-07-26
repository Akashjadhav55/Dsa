# Q6: Count how many elements are positive, negative, or zero.
# Input: Size n, then n integers
# Output: Count of positive, negative, and zero

n = int(input())
arr = list(map(int, input().split()))
pos = sum(1 for x in arr if x > 0)
neg = sum(1 for x in arr if x < 0)
zero = sum(1 for x in arr if x == 0)
print(f"Positive: {pos}")
print(f"Negative: {neg}")
print(f"Zero: {zero}")
