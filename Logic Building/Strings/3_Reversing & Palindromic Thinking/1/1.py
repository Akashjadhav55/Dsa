# Q1: Reverse a string without using built-in reverse.
# Input: A string
# Output: Reversed string

s = input()
rev = ""
for c in s:
    rev = c + rev
print(rev)
