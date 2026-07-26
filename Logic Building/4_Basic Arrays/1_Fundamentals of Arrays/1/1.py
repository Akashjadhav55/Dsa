# Q1: Input n and take n integers into an array; print them.
# Input: Size n, then n integers
# Output: All n elements

n = int(input())
arr = list(map(int, input().split()))
for x in arr:
    print(x)
