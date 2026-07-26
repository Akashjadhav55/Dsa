# Q6: Count how many elements are common between two arrays.
# Input: Size n and m, two arrays
# Output: Count of common elements

n = int(input())
a = set(map(int, input().split()))
m = int(input())
b = list(map(int, input().split()))
count = 0
for x in b:
    if x in a:
        count += 1
        a.remove(x)
print(count)
