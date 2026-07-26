# Q9: Reverse only characters, keeping digits in place.
# Input: A string
# Output: Reversed characters, digits in original positions

s = list(input())
left, right = 0, len(s) - 1
while left < right:
    if s[left].isdigit():
        left += 1
    elif s[right].isdigit():
        right -= 1
    else:
        s[left], s[right] = s[right], s[left]
        left += 1
        right -= 1
print(''.join(s))
