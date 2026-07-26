# Q5: Find GCD (HCF) of two numbers using Euclid's algorithm recursively.
# Input: Two integers
# Output: GCD of the two numbers

def gcd(a, b):
    if b == 0:
        return a
    return gcd(b, a % b)

a, b = map(int, input().split())
print(gcd(a, b))
