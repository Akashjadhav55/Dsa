# Q3: Check if a number is a palindrome using recursion.
# Input: An integer
# Output: "Palindrome" or "Not a Palindrome"

def is_palindrome(n, original, rev):
    if n == 0:
        return original == rev
    return is_palindrome(n // 10, original, rev * 10 + n % 10)

n = int(input())
if is_palindrome(n, n, 0):
    print("Palindrome")
else:
    print("Not a Palindrome")
