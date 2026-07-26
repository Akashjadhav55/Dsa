# Q3: Find the second largest element in an array.
# Input: Size n, then n integers
# Output: Second largest element

n = int(input())
arr = list(map(int, input().split()))
unique = list(set(arr))
unique.sort()
if len(unique) >= 2:
    print(unique[-2])
else:
    print("Not enough unique elements")
