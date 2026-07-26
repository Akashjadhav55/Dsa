# Q10: Print pattern of characters (A, AB, ABC, ...) recursively.
# Input: An integer n
# Output: Alphabet sequence pattern

def print_chars(i):
    if i == 0:
        return
    print_chars(i - 1)
    print(chr(64 + i), end=" ")

def print_pattern(n, i):
    if i > n:
        return
    print_chars(i)
    print()
    print_pattern(n, i + 1)

n = int(input())
print_pattern(n, 1)
