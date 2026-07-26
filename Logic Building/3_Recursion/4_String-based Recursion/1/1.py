# Q1: Reverse a string using recursion.
# Input: A string
# Output: Reversed string

def reverse_string(s, i):
    if i < 0:
        return ""
    return s[i] + reverse_string(s, i - 1)

s = input()
print(reverse_string(s, len(s) - 1))
