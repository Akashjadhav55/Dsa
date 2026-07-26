# Q9: Print the sum of all odd digits and even digits separately in a number.
# Input: An integer
# Output: Sum of odd digits and sum of even digits

n = int(input())
odd_sum = 0
even_sum = 0
while n != 0:
    digit = n % 10
    if digit % 2 == 0:
        even_sum += digit
    else:
        odd_sum += digit
    n //= 10
print(f"Sum of odd digits: {odd_sum}")
print(f"Sum of even digits: {even_sum}")
