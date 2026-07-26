# Q5: Replace all occurrences of a character (say 'a' -> 'x') recursively.
# Input: A string and characters to find/replace
# Output: Modified string

def replace_char(s, i, find, replace):
    if i == len(s):
        return ""
    if s[i] == find:
        return replace + replace_char(s, i + 1, find, replace)
    return s[i] + replace_char(s, i + 1, find, replace)

s = input()
find = input()
replace = input()
print(replace_char(s, 0, find, replace))
