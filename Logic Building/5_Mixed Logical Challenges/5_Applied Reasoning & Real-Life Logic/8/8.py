# Q8: Print characters that are common in two strings.
# Input: Two strings
# Output: Common characters

s1 = input().lower()
s2 = input().lower()
common = []
for c in s1:
    if c in s2 and c not in common:
        common.append(c)
print(' '.join(common))
