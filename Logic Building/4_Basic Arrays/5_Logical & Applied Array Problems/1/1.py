# Q1: Check if the array is sorted in ascending order.
# Input: Size n, then n integers
# Output: "Sorted" or "Not Sorted"

n = int(input())
arr = list(map(int, input().split()))
sorted_arr = sorted(arr)
print("Sorted" if arr == sorted_arr else "Not Sorted")
