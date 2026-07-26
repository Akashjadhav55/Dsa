# Q6: Count how many words are in a sentence.
# Input: A sentence
# Output: Word count

s = input().strip()
if s == '':
    print(0)
else:
    print(len(s.split()))
