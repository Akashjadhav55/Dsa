# Q4: Print all Armstrong numbers between 1 and 1000.
# Input: None
# Output: Armstrong numbers from 1 to 1000

for num in range(1, 1001):
    temp = num
    digits = len(str(num))
    s = 0
    while temp > 0:
        d = temp % 10
        s += d ** digits
        temp //= 10
    if s == num:
        print(num)
