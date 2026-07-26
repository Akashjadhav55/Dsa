# Q5: Find the smallest and largest digit in a given number.
# Input: An integer
# Output: Smallest and largest digit

n = int(input())
smallest = 9
largest = 0
while n != 0:
    digit = n % 10
    if digit < smallest:
        smallest = digit
    if digit > largest:
        largest = digit
    n //= 10
print(f"Smallest: {smallest}")
print(f"Largest: {largest}")
