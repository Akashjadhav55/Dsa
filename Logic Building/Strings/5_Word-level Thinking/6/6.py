# Q6: Print all words that start and end with the same letter.
# Input: A sentence
# Output: Words starting and ending with same letter

s = input().strip().split()
for w in s:
    if w[0].lower() == w[-1].lower():
        print(w)
