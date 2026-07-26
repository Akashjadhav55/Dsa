# Q4: Print a triangle of stars recursively (bottom-up).
# Input: An integer n
# Output: Decreasing triangle of stars

def print_row(cols):
    if cols == 0:
        return
    print("*", end=" ")
    print_row(cols - 1)

def print_triangle(n):
    if n == 0:
        return
    print_row(n)
    print()
    print_triangle(n - 1)

n = int(input())
print_triangle(n)
