# Q1: Create a new array containing squares of all numbers.
# Input: Size n, then n integers
# Output: Array of squares

n = int(input())
arr = list(map(int, input().split()))
for x in arr:
    print(x * x)
