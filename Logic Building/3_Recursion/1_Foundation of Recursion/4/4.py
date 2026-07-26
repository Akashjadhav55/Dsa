# Q4: Print only odd numbers from 1 to n recursively.
# Input: An integer n
# Output: Odd numbers from 1 to n

def print_odd(i, n):
    if i > n:
        return
    if i % 2 != 0:
        print(i, end=" ")
    print_odd(i + 1, n)

n = int(input())
print_odd(1, n)
