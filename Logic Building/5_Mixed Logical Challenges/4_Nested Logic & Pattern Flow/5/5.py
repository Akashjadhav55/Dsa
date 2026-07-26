# Q5: Count how many times a number appears consecutively in an array.
# Input: Size n, then n integers
# Output: Consecutive occurrence counts

n = int(input())
arr = list(map(int, input().split()))
count = 1
for i in range(1, n):
    if arr[i] == arr[i-1]:
        count += 1
    else:
        print(f"{arr[i-1]} appears {count} times")
        count = 1
print(f"{arr[-1]} appears {count} times")
