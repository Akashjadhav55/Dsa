# Q10: Remove extra spaces between words.
# Input: A sentence
# Output: Sentence with single spaces

s = input().strip()
print(' '.join(s.split()))
