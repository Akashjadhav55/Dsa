# Q5: Count how many times a coin lands on heads/tails (use random).
# Input: Number of tosses
# Output: Count of heads and tails

import random

n = int(input())
heads = 0
tails = 0
for _ in range(n):
    if random.random() < 0.5:
        heads += 1
    else:
        tails += 1
print(f"Heads: {heads}")
print(f"Tails: {tails}")
