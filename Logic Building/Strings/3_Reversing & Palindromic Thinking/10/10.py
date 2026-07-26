# Q10: Reverse string but skip spaces.
# Input: A string
# Output: Reversed string with spaces in original positions

s = list(input())
left, right = 0, len(s) - 1
while left < right:
    if s[left] == ' ':
        left += 1
    elif s[right] == ' ':
        right -= 1
    else:
        s[left], s[right] = s[right], s[left]
        left += 1
        right -= 1
print(''.join(s))
