# Q6: Print reverse triangle pattern recursively.
# Input: An integer n
# Output: Reverse triangle

def print_spaces(s):
    if s == 0:
        return
    print("  ", end="")
    print_spaces(s - 1)

def print_stars(c):
    if c == 0:
        return
    print("*", end=" ")
    print_stars(c - 1)

def print_reverse_triangle(n, i):
    if i > n:
        return
    print_spaces(i - 1)
    print_stars(n - i + 1)
    print()
    print_reverse_triangle(n, i + 1)

n = int(input())
print_reverse_triangle(n, 1)
