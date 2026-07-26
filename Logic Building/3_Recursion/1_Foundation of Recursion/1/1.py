# Q1: Print numbers from 1 to n using recursion.
# Input: An integer n
# Output: Numbers 1 to n

def print_1_to_n(n):
    if n == 0:
        return
    print_1_to_n(n - 1)
    print(n, end=" ")

n = int(input())
print_1_to_n(n)
