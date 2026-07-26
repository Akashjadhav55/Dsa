# Q3: Find the first occurrence of a given number.
# Input: Size n, n integers, element x
# Output: Index of first occurrence (-1 if not found)

n = int(input())
arr = list(map(int, input().split()))
x = int(input())
try:
    print(arr.index(x))
except ValueError:
    print(-1)
