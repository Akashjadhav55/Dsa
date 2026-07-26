# Q5: Swap first and last words in a sentence.
# Input: A sentence
# Output: Sentence with swapped first and last words

s = input().strip().split()
if len(s) >= 2:
    s[0], s[-1] = s[-1], s[0]
print(' '.join(s))
