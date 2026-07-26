# Q8: Find the second largest element in an array.
# Input: Size n, then n integers
# Output: Second largest element

n = int(input())
arr = list(map(int, input().split()))
unique = list(set(arr))
unique.sort(reverse=True)
print(unique[1])
