# Q7: Print pattern of increasing characters (A, AB, ABC...).
# Input: An integer n
# Output: Alphabet sequence pattern

n = int(input())
for i in range(1, n + 1):
    print(''.join(chr(ord('A') + j) for j in range(i)))
