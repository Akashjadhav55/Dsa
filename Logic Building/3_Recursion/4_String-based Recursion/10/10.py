# Q10: Count consonants and vowels separately using recursion.
# Input: A string
# Output: Vowel count and consonant count

def count_vc(s, i, v, c):
    if i == len(s):
        return v, c
    ch = s[i].lower()
    if ch.isalpha():
        if ch in 'aeiou':
            return count_vc(s, i + 1, v + 1, c)
        else:
            return count_vc(s, i + 1, v, c + 1)
    return count_vc(s, i + 1, v, c)

s = input()
v, c = count_vc(s, 0, 0, 0)
print(f"Vowels: {v}")
print(f"Consonants: {c}")
