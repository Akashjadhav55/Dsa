# Q7: Print multiplication table of n recursively.
# Input: An integer n
# Output: Table of n

def print_table(n, i):
    if i > 10:
        return
    print(f"{n} x {i} = {n * i}")
    print_table(n, i + 1)

n = int(input())
print_table(n, 1)
