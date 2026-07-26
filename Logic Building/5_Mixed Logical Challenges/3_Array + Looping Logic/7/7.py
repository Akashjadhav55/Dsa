# Q7: Merge two arrays into one.
# Input: Size n and m, two arrays
# Output: Merged array

n = int(input())
a = list(map(int, input().split()))
m = int(input())
b = list(map(int, input().split()))
print(' '.join(map(str, a + b)))
