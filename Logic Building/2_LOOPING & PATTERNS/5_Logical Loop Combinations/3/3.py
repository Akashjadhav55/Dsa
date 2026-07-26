# Q3: Print all numbers that are palindromes between 1-500.
# Input: None
# Output: All palindromic numbers 1-500

for i in range(1, 501):
    original = i
    reversed_num = 0
    temp = i
    while temp != 0:
        reversed_num = reversed_num * 10 + temp % 10
        temp //= 10
    if original == reversed_num:
        print(i)
