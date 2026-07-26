# Q8: Remove the first and last character and print remaining.
# Input: A string
# Output: String without first and last character

s = input()
if len(s) <= 2:
    print("")
else:
    print(s[1:-1])
