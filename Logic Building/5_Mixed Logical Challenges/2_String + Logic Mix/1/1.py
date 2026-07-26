# Q1: Check if two strings are anagrams (without using collections).
# Input: Two strings
# Output: "Anagrams" or "Not Anagrams"

s1 = input().lower()
s2 = input().lower()
if len(s1) != len(s2):
    print("Not Anagrams")
else:
    freq = [0] * 26
    for c in s1:
        freq[ord(c) - ord('a')] += 1
    for c in s2:
        freq[ord(c) - ord('a')] -= 1
    if all(f == 0 for f in freq):
        print("Anagrams")
    else:
        print("Not Anagrams")
