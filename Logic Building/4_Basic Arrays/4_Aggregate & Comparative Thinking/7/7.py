# Q7: Find element-wise sum of two arrays (A[i] + B[i]).
# Input: Size n, two arrays
# Output: Element-wise sum array

n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
for i in range(n):
    print(a[i] + b[i])
