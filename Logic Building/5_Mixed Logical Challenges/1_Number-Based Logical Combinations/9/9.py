# Q9: Check if a number is palindrome (121 -> true).
# Input: An integer
# Output: "Palindrome" or "Not a Palindrome"

num = int(input())
temp = num
rev = 0
while temp > 0:
    rev = rev * 10 + temp % 10
    temp //= 10
if num == rev:
    print("Palindrome")
else:
    print("Not a Palindrome")
