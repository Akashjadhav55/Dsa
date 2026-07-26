# Q8: Check if two strings are rotations of each other.
# Input: Two strings
# Output: "Yes" or "No"

s1 = input()
s2 = input()
if len(s1) != len(s2):
    print("No")
else:
    print("Yes" if s2 in s1 + s1 else "No")
