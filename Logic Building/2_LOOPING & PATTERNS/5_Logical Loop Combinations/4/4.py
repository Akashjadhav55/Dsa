# Q4: Print numbers between 1-100 whose digits add up to a multiple of 3.
# Input: None
# Output: Numbers with digit sum divisible by 3

for i in range(1, 101):
    digit_sum = sum(int(d) for d in str(i))
    if digit_sum % 3 == 0:
        print(i)
