# Q6: Print the sum of first n natural numbers.
# Input: An integer n
# Output: Sum of 1+2+...+n

n = int(input())
total = 0
for i in range(1, n + 1):
    total += i
print(total)
