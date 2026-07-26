# Q2: Check if a string is palindrome using recursion.
# Input: A string
# Output: "Palindrome" or "Not a Palindrome"

def is_palindrome(s, l, r):
    if l >= r:
        return True
    if s[l] != s[r]:
        return False
    return is_palindrome(s, l + 1, r - 1)

s = input()
if is_palindrome(s, 0, len(s) - 1):
    print("Palindrome")
else:
    print("Not a Palindrome")
