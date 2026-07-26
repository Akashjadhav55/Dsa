# Q1: Input an element x - check if it exists in the array.
# Input: Size n, n integers, element x
# Output: "Found" or "Not Found"

n = int(input())
arr = list(map(int, input().split()))
x = int(input())
print("Found" if x in arr else "Not Found")
