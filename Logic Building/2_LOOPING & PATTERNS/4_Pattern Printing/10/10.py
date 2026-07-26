# Q10: Print stars and spaces alternating.
# Input: An integer n
# Output: Alternating star-space pattern in pyramid shape

n = int(input())
for i in range(1, n + 1):
    print(" " * (n - i) + "* " * i)
