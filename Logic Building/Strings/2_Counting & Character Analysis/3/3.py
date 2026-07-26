# Q3: Count how many uppercase and lowercase letters a string has.
# Input: A string
# Output: Uppercase count and lowercase count

s = input()
upper = lower = 0
for c in s:
    if c.isupper():
        upper += 1
    elif c.islower():
        lower += 1
print(f"Uppercase: {upper}")
print(f"Lowercase: {lower}")
