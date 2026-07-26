# Q3: Print all subarrays of a given array.
# Input: Size n, then n integers
# Output: All possible subarrays

n = int(input())
arr = list(map(int, input().split()))
for i in range(n):
    for j in range(i, n):
        print(arr[i:j+1])
