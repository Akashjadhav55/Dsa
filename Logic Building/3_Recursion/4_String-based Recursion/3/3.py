# Q3: Count vowels in a string recursively.
# Input: A string
# Output: Count of vowels

def count_vowels(s, i):
    if i == len(s):
        return 0
    c = s[i].lower()
    count = 1 if c in 'aeiou' else 0
    return count + count_vowels(s, i + 1)

s = input()
print(count_vowels(s, 0))
