# Q7: Print digits of a number in words recursively (e.g., 123 -> "one two three").
# Input: An integer
# Output: Digits in words

words = ["zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"]

def print_digits_in_words(n):
    if n == 0:
        return
    print_digits_in_words(n // 10)
    print(words[n % 10], end=" ")

n = int(input())
print_digits_in_words(n)
