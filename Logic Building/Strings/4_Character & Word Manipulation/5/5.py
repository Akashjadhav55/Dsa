# Q5: Print the string after removing all digits.
# Input: A string
# Output: String without digits

s = input()
result = ""
for c in s:
    if not c.isdigit():
        result += c
print(result)
