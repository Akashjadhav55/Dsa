# Q7: Count how many pairs of elements have a sum equal to a given number k.
# Input: Size n, n integers, and value k
# Output: Count of pairs

n = int(input())
arr = list(map(int, input().split()))
k = int(input())
count = 0
for i in range(n):
    for j in range(i + 1, n):
        if arr[i] + arr[j] == k:
            count += 1
print(count)
