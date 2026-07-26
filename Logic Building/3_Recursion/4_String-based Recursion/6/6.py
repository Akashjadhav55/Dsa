# Q6: Remove all occurrences of a character from a string recursively.
# Input: A string and a character
# Output: String without the character

def remove_char(s, i, ch):
    if i == len(s):
        return ""
    if s[i] == ch:
        return remove_char(s, i + 1, ch)
    return s[i] + remove_char(s, i + 1, ch)

s = input()
ch = input()
print(remove_char(s, 0, ch))
