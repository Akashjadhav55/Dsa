# Q7: Keep only the first occurrence of each character.
# Input: A string
# Output: String with only first occurrences

s = input()
seen = [False] * 256
result = ""
for c in s:
    if not seen[ord(c)]:
        seen[ord(c)] = True
        result += c
print(result)
