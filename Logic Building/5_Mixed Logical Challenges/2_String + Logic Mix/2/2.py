# Q2: Count vowels in each word of a sentence.
# Input: A sentence
# Output: Vowel count per word

line = input()
for w in line.split():
    count = sum(1 for c in w.lower() if c in "aeiou")
    print(f"{w}: {count}")
