# Q10: Take 5 numbers as input. If user enters 0, skip it. Print sum of all non-zero numbers.
# Input: 5 integers
# Output: Sum of non-zero numbers

total = 0
for i in range(5):
    n = int(input())
    if n != 0:
        total += n
print(total)
