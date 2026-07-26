# Q2: Count how many positive, negative, and zero elements are in an array.
# Input: Size n, then n integers
# Output: Count of each

n = int(input())
arr = list(map(int, input().split()))
pos = sum(1 for x in arr if x > 0)
neg = sum(1 for x in arr if x < 0)
zero = sum(1 for x in arr if x == 0)
print(f"Positive: {pos}")
print(f"Negative: {neg}")
print(f"Zero: {zero}")
