# Q4: Find the frequency of each character in a string (without map).
# Input: A string
# Output: Frequency of each character

s = input()
freq = [0] * 256
for c in s:
    freq[ord(c)] += 1
for i in range(256):
    if freq[i] > 0:
        print(f"{chr(i)}: {freq[i]}")
