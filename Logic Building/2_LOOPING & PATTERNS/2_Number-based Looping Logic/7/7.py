# Q7: Print all prime numbers between 1 and 100.
# Input: None
# Output: All prime numbers from 2 to 100

for i in range(2, 101):
    is_prime = True
    for j in range(2, int(i**0.5) + 1):
        if i % j == 0:
            is_prime = False
            break
    if is_prime:
        print(i)
