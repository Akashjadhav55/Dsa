# Q2: Reverse each word in a sentence.
# Input: A sentence
# Output: Sentence with each word reversed

s = input().split()
result = []
for w in s:
    rev = ""
    for c in w:
        rev = c + rev
    result.append(rev)
print(' '.join(result))
