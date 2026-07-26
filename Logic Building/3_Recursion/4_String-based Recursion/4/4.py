# Q4: Remove all spaces from a string recursively.
# Input: A string
# Output: String without spaces

def remove_spaces(s, i):
    if i == len(s):
        return ""
    if s[i] == ' ':
        return remove_spaces(s, i + 1)
    return s[i] + remove_spaces(s, i + 1)

s = input()
print(remove_spaces(s, 0))
