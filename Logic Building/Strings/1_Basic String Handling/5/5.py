# Q5: Count how many characters (excluding spaces) are in the string.
# Input: A string
# Output: Character count excluding spaces

s = input()
count = 0
for c in s:
    if c != ' ':
        count += 1
print(count)
