# Q9: Swap alternate elements (1st <-> 2nd, 3rd <-> 4th, etc.).
# Input: Size n, then n integers
# Output: Modified array

n = int(input())
arr = list(map(int, input().split()))
for i in range(0, n - 1, 2):
    arr[i], arr[i + 1] = arr[i + 1], arr[i]
print(*arr)
