# Q6: Count how many even digits a number contains.
# Input: An integer
# Output: Count of even digits

num = int(input())
count = 0
while num > 0:
    if (num % 10) % 2 == 0:
        count += 1
    num //= 10
print(count)
