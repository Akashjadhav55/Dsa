# Q8: Print numbers in increasing and decreasing order in same function.
# Input: An integer n
# Output: 1 to n then n to 1

def print_inc_dec(n):
    if n == 0:
        return
    print(n, end=" ")
    print_inc_dec(n - 1)
    print(n, end=" ")

n = int(input())
print_inc_dec(n)
