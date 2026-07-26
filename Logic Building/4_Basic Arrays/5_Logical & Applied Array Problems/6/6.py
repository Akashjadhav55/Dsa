# Q6: Find the sum of all elements except the largest and smallest.
# Input: Size n, then n integers
# Output: Sum excluding max and min

n = int(input())
arr = list(map(int, input().split()))
print(sum(arr) - max(arr) - min(arr))
