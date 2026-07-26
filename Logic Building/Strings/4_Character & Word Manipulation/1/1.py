# Q1: Remove all vowels from a string.
# Input: A string
# Output: String without vowels

s = input()
result = ""
for c in s:
    if c.lower() not in 'aeiou':
        result += c
print(result)
