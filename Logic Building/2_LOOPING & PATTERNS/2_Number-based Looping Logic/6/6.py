# Q6: Check if a number is a perfect number.
# Input: An integer
# Output: "Perfect Number" or "Not a Perfect Number"

n = int(input())
total = 0
for i in range(1, n):
    if n % i == 0:
        total += i
if total == n:
    print("Perfect Number")
else:
    print("Not a Perfect Number")
