# Q3: Check if a number is an Armstrong number.
# Input: An integer
# Output: "Armstrong Number" or "Not an Armstrong Number"

num = int(input())
temp = num
digits = len(str(num))
s = 0
while temp > 0:
    d = temp % 10
    s += d ** digits
    temp //= 10
if s == num:
    print("Armstrong Number")
else:
    print("Not an Armstrong Number")
