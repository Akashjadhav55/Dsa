# Q5: Check if all elements in an array are unique.
# Input: Size n, then n integers
# Output: "All Unique" or "Has Duplicates"

n = int(input())
arr = list(map(int, input().split()))
if len(arr) == len(set(arr)):
    print("All Unique")
else:
    print("Has Duplicates")
