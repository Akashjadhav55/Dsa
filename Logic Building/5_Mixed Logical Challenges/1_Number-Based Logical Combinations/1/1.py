# Q1: Print all numbers between 1 and N that are divisible by both 3 and 5.
# Input: An integer N
# Output: Numbers divisible by 15

n = int(input())
for i in range(1, n + 1):
    if i % 3 == 0 and i % 5 == 0:
        print(i)
