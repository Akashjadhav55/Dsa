# Q2: Count how many words have even length.
# Input: A sentence
# Output: Count of even-length words

s = input().strip().split()
count = 0
for w in s:
    if len(w) % 2 == 0:
        count += 1
print(count)
