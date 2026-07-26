# Q7: Find the sum of odd elements only.
# Input: Size n, then n integers
# Output: Sum of odd elements

n = int(input())
arr = list(map(int, input().split()))
print(sum(x for x in arr if x % 2 != 0))
