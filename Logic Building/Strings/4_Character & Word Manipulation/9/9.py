# Q9: Swap case: uppercase to lowercase and vice versa.
# Input: A string
# Output: Case-swapped string

s = input()
result = ""
for c in s:
    if c.isupper():
        result += c.lower()
    elif c.islower():
        result += c.upper()
    else:
        result += c
print(result)
