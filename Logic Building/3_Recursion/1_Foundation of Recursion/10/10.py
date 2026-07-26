# Q10: Find sum of digits of a number recursively.
# Input: An integer
# Output: Sum of digits

def sum_of_digits(n):
    if n == 0:
        return 0
    return (n % 10) + sum_of_digits(n // 10)

n = int(input())
print(sum_of_digits(n))
