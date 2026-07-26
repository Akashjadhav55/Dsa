# Q9: Print how many words start with a vowel.
# Input: A sentence
# Output: Count of words starting with a vowel

s = input().strip().split()
count = 0
for w in s:
    if w[0].lower() in 'aeiou':
        count += 1
print(count)
