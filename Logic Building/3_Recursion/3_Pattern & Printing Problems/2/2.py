# Q2: Print a square of stars recursively (n x n).
# Input: An integer n
# Output: n x n grid of stars

def print_row(cols):
    if cols == 0:
        return
    print("*", end=" ")
    print_row(cols - 1)

def print_square(rows, cols):
    if rows == 0:
        return
    print_row(cols)
    print()
    print_square(rows - 1, cols)

n = int(input())
print_square(n, n)
