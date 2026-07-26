# Q6: Count words that start and end with the same letter.
# Input: A sentence
# Output: Count of such words

words = input().lower().split()
count = 0
for w in words:
    if len(w) > 0 and w[0] == w[-1]:
        count += 1
print(count)
