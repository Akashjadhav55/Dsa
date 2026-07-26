# Q1: Print a line of n stars recursively.
# Input: An integer n
# Output: A line of n stars

def print_stars(n):
    if n == 0:
        return
    print("*", end=" ")
    print_stars(n - 1)

n = int(input())
print_stars(n)
