# Q1: Count the number of digits in a given number.
# Input: An integer
# Output: Number of digits

n = int(input())
count = 0
if n == 0:
    count = 1
while n != 0:
    count += 1
    n //= 10
print(count)
