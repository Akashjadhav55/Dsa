# Q10: Print the product of digits of a given number.
# Input: An integer
# Output: Product of all digits

n = int(input())
product = 1
while n > 0:
    product *= n % 10
    n //= 10
print(product)
