# Q5: Print characters that appear more than once (without map).
# Input: A string
# Output: Repeated characters

s = input().lower()
freq = [0] * 26
for c in s:
    if 'a' <= c <= 'z':
        freq[ord(c) - ord('a')] += 1
result = [chr(i + ord('a')) for i in range(26) if freq[i] > 1]
print(' '.join(result))
