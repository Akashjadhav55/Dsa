# Q10: Take n elements and print only those greater than a given value k.
# Input: Size n, n integers, and value k
# Output: Elements greater than k

n = int(input())
arr = list(map(int, input().split()))
k = int(input())
for x in arr:
    if x > k:
        print(x)
