# Q6: Print all numbers from 1-n whose binary representation has an even number of 1s.
# Input: An integer n
# Output: Numbers with even set bits

n = int(input())
for i in range(1, n + 1):
    count = bin(i).count("1")
    if count % 2 == 0:
        print(i)
