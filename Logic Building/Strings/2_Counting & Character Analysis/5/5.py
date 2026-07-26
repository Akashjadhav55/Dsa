# Q5: Count how many spaces are there in a sentence.
# Input: A sentence
# Output: Space count

s = input()
count = 0
for c in s:
    if c == ' ':
        count += 1
print(count)
