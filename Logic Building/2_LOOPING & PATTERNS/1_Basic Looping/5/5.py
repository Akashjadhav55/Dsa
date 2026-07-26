# Q5: Print the table of a given number (n x 1 to n x 10).
# Input: An integer n
# Output: Multiplication table of n

n = int(input())
for i in range(1, 11):
    print(f"{n} x {i} = {n * i}")
