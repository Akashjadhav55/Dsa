# Q3: Replace all vowels with '*'.
# Input: A string
# Output: String with vowels replaced by '*'

s = input()
result = ""
for c in s:
    if c.lower() in 'aeiou':
        result += '*'
    else:
        result += c
print(result)
