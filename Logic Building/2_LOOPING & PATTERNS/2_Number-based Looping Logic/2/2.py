# Q2: Print the reverse of a given number.
# Input: An integer
# Output: Reversed number

n = int(input())
reversed = 0
while n != 0:
    reversed = reversed * 10 + n % 10
    n //= 10
print(reversed)
