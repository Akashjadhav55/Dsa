# Q4: Replace every vowel in a string with its position (a=1, e=2...).
# Input: A string
# Output: Vowels replaced with positions

s = input().lower()
result = ""
for c in s:
    pos = "aeiou".find(c)
    if pos != -1:
        result += str(pos + 1)
    else:
        result += c
print(result)
