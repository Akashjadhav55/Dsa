# Q4: Find the shortest word in a sentence.
# Input: A sentence
# Output: The shortest word

s = input().strip().split()
shortest = s[0]
for w in s:
    if len(w) < len(shortest):
        shortest = w
print(shortest)
