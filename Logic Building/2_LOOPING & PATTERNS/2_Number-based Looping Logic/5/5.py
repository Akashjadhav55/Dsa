# Q5: Check if a number is an Armstrong number.
# Input: An integer
# Output: "Armstrong Number" or "Not an Armstrong Number"

n = int(input())
original = n
total = 0
digits = len(str(n))
while n != 0:
    d = n % 10
    total += d ** digits
    n //= 10
if total == original:
    print("Armstrong Number")
else:
    print("Not an Armstrong Number")
