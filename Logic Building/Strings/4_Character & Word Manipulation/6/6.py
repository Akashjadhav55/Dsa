# Q6: Remove duplicate characters from a string.
# Input: A string
# Output: String without duplicates

s = input()
seen = [False] * 256
result = ""
for c in s:
    if not seen[ord(c)]:
        seen[ord(c)] = True
        result += c
print(result)
