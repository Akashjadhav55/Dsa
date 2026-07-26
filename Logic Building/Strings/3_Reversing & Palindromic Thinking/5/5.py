# Q5: Check if two strings are the reverse of each other.
# Input: Two strings
# Output: "Yes" or "No"

s1 = input()
s2 = input()
rev = ""
for c in s2:
    rev = c + rev
print("Yes" if s1 == rev else "No")
