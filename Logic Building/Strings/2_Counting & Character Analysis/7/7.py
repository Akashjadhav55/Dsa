# Q7: Count alphabets before 'm' and after 'm' in a string.
# Input: A string
# Output: Count before and after 'm'

s = input().lower()
before = after = 0
found = False
for c in s:
    if c == 'm':
        found = True
    elif c.isalpha():
        if not found:
            before += 1
        else:
            after += 1
print(f"Before m: {before}")
print(f"After m: {after}")
