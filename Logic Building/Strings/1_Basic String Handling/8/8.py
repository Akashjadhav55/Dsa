# Q8: Compare two strings lexicographically.
# Input: Two strings
# Output: "String 1 comes first", "String 2 comes first", or "Equal"

s1 = input()
s2 = input()
if s1 < s2:
    print("String 1 comes first")
elif s1 > s2:
    print("String 2 comes first")
else:
    print("Equal")
