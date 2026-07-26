# Q19: Print alphabet pyramid (A, ABA, ABCBA, ABCDCBA).
# Input: An integer n
# Output: Palindrome alphabet pyramid

n = int(input())
for i in range(n):
    row = " " * (n - i - 1)
    for j in range(i + 1):
        row += chr(65 + j)
    for j in range(i - 1, -1, -1):
        row += chr(65 + j)
    print(row)
