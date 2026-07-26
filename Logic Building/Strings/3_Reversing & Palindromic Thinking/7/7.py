# Q7: Print the second half of the string in reverse.
# Input: A string
# Output: Second half reversed

s = input()
mid = len(s) // 2
rev = ""
for c in s[mid:]:
    rev = c + rev
print(rev)
