# Q4: Check whether a string is a palindrome.
# Input: A string
# Output: "Palindrome" or "Not a Palindrome"

s = input()
is_palin = True
for i in range(len(s) // 2):
    if s[i] != s[-(i + 1)]:
        is_palin = False
        break
print("Palindrome" if is_palin else "Not a Palindrome")
