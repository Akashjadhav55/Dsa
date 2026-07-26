# Q3: Find the average of array elements.
# Input: Size n, then n integers
# Output: Average value

n = int(input())
arr = list(map(int, input().split()))
print(sum(arr) / n)
