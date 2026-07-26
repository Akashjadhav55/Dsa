# Q8: Remove consecutive duplicates ("aaabb" -> "ab").
# Input: A string
# Output: String without consecutive duplicates

s = input()
result = ""
for i in range(len(s)):
    if i == 0 or s[i] != s[i - 1]:
        result += s[i]
print(result)
