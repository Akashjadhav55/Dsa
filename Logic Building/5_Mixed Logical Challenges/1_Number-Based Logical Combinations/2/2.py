# Q2: Find the sum of digits of a number (use loop).
# Input: An integer
# Output: Sum of digits

num = int(input())
s = 0
while num > 0:
    s += num % 10
    num //= 10
print(s)
