# Q8: Count how many elements are greater than the average of the array.
# Input: Size n, then n integers
# Output: Count of elements above average

n = int(input())
arr = list(map(int, input().split()))
avg = sum(arr) / n
print(sum(1 for x in arr if x > avg))
