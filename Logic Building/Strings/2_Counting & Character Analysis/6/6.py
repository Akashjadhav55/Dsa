# Q6: Count how many times a given character appears in a string.
# Input: A string and a character
# Output: Frequency of the character

s = input()
ch = input()
count = 0
for c in s:
    if c == ch:
        count += 1
print(count)
