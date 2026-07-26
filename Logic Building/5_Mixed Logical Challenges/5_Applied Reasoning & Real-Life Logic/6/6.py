# Q6: Print frequency of each digit in a number.
# Input: An integer
# Output: Frequency of digits 0-9

num = input().strip()
for d in '0123456789':
    count = num.count(d)
    if count > 0:
        print(f"{d} : {count}")
