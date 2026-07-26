# Q7: Print stars in even numbers (2, 4, 6, 8, 10).
# Input: An integer n
# Output: Rows with 2, 4, 6... stars

n = int(input())
for i in range(1, n + 1):
    print("*" * (2 * i))
