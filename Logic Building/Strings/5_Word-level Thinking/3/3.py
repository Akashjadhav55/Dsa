# Q3: Find the longest word in a sentence.
# Input: A sentence
# Output: The longest word

s = input().strip().split()
longest = s[0]
for w in s:
    if len(w) > len(longest):
        longest = w
print(longest)
