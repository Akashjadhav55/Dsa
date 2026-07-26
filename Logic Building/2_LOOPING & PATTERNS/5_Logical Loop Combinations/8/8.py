# Q8: Print factorial of each number from 1 to n.
# Input: An integer n
# Output: Factorials of 1 to n

n = int(input())
fact = 1
for i in range(1, n + 1):
    fact *= i
    print(f"{i}! = {fact}")
