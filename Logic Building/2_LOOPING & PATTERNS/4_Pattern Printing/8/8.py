# Q8: Print stars in odd numbers (1, 3, 5, 7, 9).
# Input: An integer n
# Output: Rows with 1, 3, 5... stars

n = int(input())
for i in range(n):
    print("*" * (2 * i + 1))
