# Q10: Check if a number is perfect (sum of factors equals number).
# Input: An integer
# Output: "Perfect Number" or "Not a Perfect Number"

num = int(input())
s = 0
for i in range(1, num):
    if num % i == 0:
        s += i
if s == num:
    print("Perfect Number")
else:
    print("Not a Perfect Number")
