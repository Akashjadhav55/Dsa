# Q1: Print all numbers whose sum of digits is even (1-100).
# Input: None
# Output: Numbers 1-100 with even digit sum

for i in range(1, 101):
    digit_sum = sum(int(d) for d in str(i))
    if digit_sum % 2 == 0:
        print(i)
