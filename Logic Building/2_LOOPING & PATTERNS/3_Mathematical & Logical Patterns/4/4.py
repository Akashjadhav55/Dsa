# Q4: Find HCF (GCD) of two numbers using loops.
# Input: Two integers
# Output: GCD of the two numbers

a, b = map(int, input().split())
while b != 0:
    a, b = b, a % b
print(a)
