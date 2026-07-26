# Q10: Find the sum of all elements at odd indices.
# Input: Size n, then n integers
# Output: Sum of elements at odd indices

n = int(input())
arr = list(map(int, input().split()))
print(sum(arr[i] for i in range(1, n, 2)))
