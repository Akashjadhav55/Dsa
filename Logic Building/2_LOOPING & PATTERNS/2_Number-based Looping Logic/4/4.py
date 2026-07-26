# Q4: Find the sum of digits of a number.
# Input: An integer
# Output: Sum of digits

n = int(input())
total = 0
while n != 0:
    total += n % 10
    n //= 10
print(total)
