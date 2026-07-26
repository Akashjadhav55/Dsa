# Q2: Compare two arrays - check if they contain the same elements (ignore order).
# Input: Size n, two arrays of n elements
# Output: "Same Elements" or "Different Elements"

n = int(input())
a = sorted(map(int, input().split()))
b = sorted(map(int, input().split()))
print("Same Elements" if a == b else "Different Elements")
