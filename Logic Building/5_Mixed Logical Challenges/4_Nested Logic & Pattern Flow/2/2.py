# Q2: Print all pairs in an array whose sum equals a given number.
# Input: Size n, n integers, and target sum
# Output: All pairs with the given sum

n = int(input())
arr = list(map(int, input().split()))
target = int(input())
for i in range(n):
    for j in range(i + 1, n):
        if arr[i] + arr[j] == target:
            print(f"{arr[i]} + {arr[j]} = {target}")
