# Q8: Count substrings that start and end with the same character.
# Input: A string
# Output: Count of such substrings

s = input()
count = 0
for i in range(len(s)):
    for j in range(i, len(s)):
        if s[i] == s[j]:
            count += 1
print(count)
