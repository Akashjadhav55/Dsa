# Q3: Print a triangle of stars recursively (top-down).
# Input: An integer n
# Output: Increasing triangle of stars

def print_row(cols):
    if cols == 0:
        return
    print("*", end=" ")
    print_row(cols - 1)

def print_triangle(n, i):
    if i > n:
        return
    print_row(i)
    print()
    print_triangle(n, i + 1)

n = int(input())
print_triangle(n, 1)
