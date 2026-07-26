# Q3: Merge two arrays into a third array.
# Input: Size n and m, two arrays
# Output: Merged array

n = int(input())
a = list(map(int, input().split()))
m = int(input())
b = list(map(int, input().split()))
merged = a + b
for x in merged:
    print(x)
