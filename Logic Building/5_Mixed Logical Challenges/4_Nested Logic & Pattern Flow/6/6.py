# Q6: Find all pairs of characters in a string that are the same (nested loop).
# Input: A string
# Output: All matching character pairs with indices

s = input()
for i in range(len(s)):
    for j in range(i + 1, len(s)):
        if s[i] == s[j]:
            print(f"'{s[i]}' at index {i} and {j}")
