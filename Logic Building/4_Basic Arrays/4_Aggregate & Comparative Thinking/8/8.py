# Q8: Find element-wise product of two arrays.
# Input: Size n, two arrays
# Output: Element-wise product array

n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
for i in range(n):
    print(a[i] * b[i])
