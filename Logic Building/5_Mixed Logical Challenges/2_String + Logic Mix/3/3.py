# Q3: Reverse words in a string if their length is even.
# Input: A sentence
# Output: Modified sentence

words = input().split()
result = []
for w in words:
    if len(w) % 2 == 0:
        result.append(w[::-1])
    else:
        result.append(w)
print(' '.join(result))
