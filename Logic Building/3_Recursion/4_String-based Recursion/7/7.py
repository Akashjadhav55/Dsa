# Q7: Print all characters of a string one by one recursively.
# Input: A string
# Output: Each character on a new line

def print_chars(s, i):
    if i == len(s):
        return
    print(s[i])
    print_chars(s, i + 1)

s = input()
print_chars(s, 0)
