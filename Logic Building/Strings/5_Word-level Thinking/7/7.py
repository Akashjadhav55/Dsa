# Q7: Count how many words contain the letter 'a'.
# Input: A sentence
# Output: Count of words containing 'a'

s = input().strip().split()
count = 0
for w in s:
    if 'a' in w.lower():
        count += 1
print(count)
