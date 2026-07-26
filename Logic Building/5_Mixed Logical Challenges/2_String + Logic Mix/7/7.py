# Q7: Toggle case for every alternate word in a sentence.
# Input: A sentence
# Output: Modified sentence

words = input().split()
result = []
for i, w in enumerate(words):
    if i % 2 == 1:
        result.append(w.swapcase())
    else:
        result.append(w)
print(' '.join(result))
