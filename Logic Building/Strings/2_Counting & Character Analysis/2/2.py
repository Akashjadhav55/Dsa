# Q2: Count the number of digits, letters, and special characters.
# Input: A string
# Output: Count of digits, letters, and special characters

s = input()
digits = letters = special = 0
for c in s:
    if c.isdigit():
        digits += 1
    elif c.isalpha():
        letters += 1
    elif c != ' ':
        special += 1
print(f"Digits: {digits}")
print(f"Letters: {letters}")
print(f"Special characters: {special}")
