# Q3: Check if a number is a palindrome.
# Input: An integer
# Output: "Palindrome" or "Not a Palindrome"

n = int(input())
original = n
reversed = 0
while n != 0:
    reversed = reversed * 10 + n % 10
    n //= 10
if original == reversed:
    print("Palindrome")
else:
    print("Not a Palindrome")
