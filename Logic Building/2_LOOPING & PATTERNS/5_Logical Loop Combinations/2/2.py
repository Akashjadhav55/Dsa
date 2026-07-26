# Q2: Count how many numbers between 1-500 are divisible by 7 but not by 5.
# Input: None
# Output: Count of such numbers

count = 0
for i in range(1, 501):
    if i % 7 == 0 and i % 5 != 0:
        count += 1
print(count)
