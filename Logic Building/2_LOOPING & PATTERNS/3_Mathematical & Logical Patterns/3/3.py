# Q3: Print all numbers between a and b divisible by 7.
# Input: Two integers a and b
# Output: Numbers between a and b divisible by 7

a, b = map(int, input().split())
for i in range(a, b + 1):
    if i % 7 == 0:
        print(i)
