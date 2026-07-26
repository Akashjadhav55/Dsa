# Q9: Convert a string to uppercase recursively.
# Input: A string
# Output: Uppercase string

def to_uppercase(s, i):
    if i == len(s):
        return ""
    c = s[i]
    if 'a' <= c <= 'z':
        c = chr(ord(c) - 32)
    return c + to_uppercase(s, i + 1)

s = input()
print(to_uppercase(s, 0))
