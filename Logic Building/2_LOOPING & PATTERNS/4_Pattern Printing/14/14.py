# Q14: Print single digit repeating pattern (1, 11, 111, 1111).
# Input: An integer n
# Output: Repeating digit pattern

n = int(input())
for i in range(1, n + 1):
    print("1" * i)
