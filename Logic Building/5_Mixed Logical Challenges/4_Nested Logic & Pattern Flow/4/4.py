# Q4: Check if an array is sorted (ascending or descending).
# Input: Size n, then n integers
# Output: "Ascending", "Descending", or "Not Sorted"

n = int(input())
arr = list(map(int, input().split()))
asc = all(arr[i] <= arr[i+1] for i in range(n-1))
desc = all(arr[i] >= arr[i+1] for i in range(n-1))
if asc:
    print("Ascending")
elif desc:
    print("Descending")
else:
    print("Not Sorted")
