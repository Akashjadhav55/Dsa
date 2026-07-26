# Q7: Print the sum of all even numbers up to n.
# Input: An integer n
# Output: Sum of all even numbers from 2 to n

n = int(input())
total = 0
for i in range(2, n + 1, 2):
    total += i
print(total)
