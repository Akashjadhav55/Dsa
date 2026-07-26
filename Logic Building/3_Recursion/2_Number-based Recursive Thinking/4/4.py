# Q4: Find product of digits of a number recursively.
# Input: An integer
# Output: Product of digits

def product_of_digits(n):
    if n == 0:
        return 1
    return (n % 10) * product_of_digits(n // 10)

n = int(input())
print(product_of_digits(n))
