# Q8: Check if a number is prime or not.
# Input: An integer
# Output: "Prime" or "Not Prime"

n = int(input())
if n <= 1:
    print("Not Prime")
else:
    is_prime = True
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            is_prime = False
            break
    print("Prime" if is_prime else "Not Prime")
