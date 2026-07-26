# Q10: Remove duplicate words from a sentence.
# Input: A sentence
# Output: Sentence without duplicate words

words = input().split()
seen = []
result = []
for w in words:
    if w not in seen:
        seen.append(w)
        result.append(w)
print(' '.join(result))
