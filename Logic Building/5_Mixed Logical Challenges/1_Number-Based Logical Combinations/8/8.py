# Q8: Print the reverse of a number (123 -> 321).
# Input: An integer
# Output: Reversed number

num = int(input())
rev = 0
while num > 0:
    rev = rev * 10 + num % 10
    num //= 10
print(rev)
