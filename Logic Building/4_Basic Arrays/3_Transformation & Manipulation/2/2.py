# Q2: Create a new array containing only even elements.
# Input: Size n, then n integers
# Output: Array of even elements

n = int(input())
arr = list(map(int, input().split()))
for x in arr:
    if x % 2 == 0:
        print(x)
