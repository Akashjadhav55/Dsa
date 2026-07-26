# Q8: Print the string in reverse order recursively (without using loops).
# Input: A string
# Output: Reversed string

def print_reverse(s, i):
    if i < 0:
        return
    print(s[i], end="")
    print_reverse(s, i - 1)

s = input()
print_reverse(s, len(s) - 1)
