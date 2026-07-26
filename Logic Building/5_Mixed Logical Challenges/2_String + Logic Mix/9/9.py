# Q9: Find the word with maximum vowels in a sentence.
# Input: A sentence
# Output: Word with most vowels

words = input().split()
max_word = ""
max_count = 0
for w in words:
    count = sum(1 for c in w.lower() if c in "aeiou")
    if count > max_count:
        max_count = count
        max_word = w
print(max_word)
