# Q8: Print the sum of all odd numbers up to n.
# Input: An integer n
# Output: Sum of all odd numbers from 1 to n

n = int(input())
total = 0
for i in range(1, n + 1, 2):
    total += i
print(total)
