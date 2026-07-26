# Q10: Count how many words end with 's'.
# Input: A sentence
# Output: Count of words ending with 's'

s = input().strip().split()
count = 0
for w in s:
    if w[-1] == 's':
        count += 1
print(count)
