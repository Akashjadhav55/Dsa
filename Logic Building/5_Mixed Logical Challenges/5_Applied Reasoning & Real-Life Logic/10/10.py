# Q10: Print all palindromic words from a sentence.
# Input: A sentence
# Output: Palindromic words

words = input().split()
for w in words:
    if w == w[::-1]:
        print(w)
