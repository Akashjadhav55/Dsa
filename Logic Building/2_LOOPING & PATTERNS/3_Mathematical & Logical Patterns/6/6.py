# Q6: Print all factors of a given number.
# Input: An integer
# Output: All factors of the number

n = int(input())
for i in range(1, n + 1):
    if n % i == 0:
        print(i)
