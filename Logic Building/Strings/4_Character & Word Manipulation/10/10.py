# Q10: Shift each character by 1 ("abc" -> "bcd").
# Input: A string
# Output: Each character shifted by 1

s = input()
result = ""
for c in s:
    result += chr(ord(c) + 1)
print(result)
