# Q7: Count how many elements are even and odd.
# Input: Size n, then n integers
# Output: Count of even and odd

n = int(input())
arr = list(map(int, input().split()))
even = sum(1 for x in arr if x % 2 == 0)
odd = sum(1 for x in arr if x % 2 != 0)
print(f"Even: {even}")
print(f"Odd: {odd}")
