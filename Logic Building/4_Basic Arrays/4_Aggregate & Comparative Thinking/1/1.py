# Q1: Compare two arrays - check if they are equal (same elements and order).
# Input: Size n, two arrays of n elements
# Output: "Equal" or "Not Equal"

n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
print("Equal" if a == b else "Not Equal")
