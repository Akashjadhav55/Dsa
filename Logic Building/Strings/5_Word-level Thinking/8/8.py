# Q8: Capitalize the first letter of each word.
# Input: A sentence
# Output: Sentence with capitalized first letters

s = input().strip().split()
result = []
for w in s:
    result.append(w[0].upper() + w[1:].lower())
print(' '.join(result))
