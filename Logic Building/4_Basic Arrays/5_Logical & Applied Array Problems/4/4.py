# Q4: Find the second smallest element in an array.
# Input: Size n, then n integers
# Output: Second smallest element

n = int(input())
arr = list(map(int, input().split()))
unique = list(set(arr))
unique.sort()
if len(unique) >= 2:
    print(unique[1])
else:
    print("Not enough unique elements")
