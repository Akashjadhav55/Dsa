# Q6: Print the middle character(s) of a string.
# Input: A string
# Output: Middle character(s)

s = input()
length = len(s)
if length % 2 == 0:
    print(s[length // 2 - 1] + s[length // 2])
else:
    print(s[length // 2])
