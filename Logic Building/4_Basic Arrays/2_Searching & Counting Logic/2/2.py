# Q2: Count how many times a given element appears.
# Input: Size n, n integers, element x
# Output: Count of occurrences

n = int(input())
arr = list(map(int, input().split()))
x = int(input())
print(arr.count(x))
