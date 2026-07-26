# Q3: Print only even numbers from 1 to n recursively.
# Input: An integer n
# Output: Even numbers from 1 to n

def print_even(i, n):
    if i > n:
        return
    if i % 2 == 0:
        print(i, end=" ")
    print_even(i + 1, n)

n = int(input())
print_even(1, n)
