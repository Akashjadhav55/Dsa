# Q1: Count how many vowels and consonants are in a string.
# Input: A string
# Output: Vowel count and consonant count

s = input().lower()
vowels = 0
consonants = 0
for c in s:
    if c.isalpha():
        if c in 'aeiou':
            vowels += 1
        else:
            consonants += 1
print(f"Vowels: {vowels}")
print(f"Consonants: {consonants}")
