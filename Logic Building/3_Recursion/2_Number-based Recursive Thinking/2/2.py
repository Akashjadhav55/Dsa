# Q2: Reverse a number recursively.
# Input: An integer
# Output: Reversed number

def reverse_number(n, rev=0):
    if n == 0:
        return rev
    return reverse_number(n // 10, rev * 10 + n % 10)

n = int(input())
print(reverse_number(n))
