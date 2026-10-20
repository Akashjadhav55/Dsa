# Q10: Take a character and check whether it's uppercase, lowercase, a digit, or a special character.
# Input: A single character
# Output: "Uppercase", "Lowercase", "Digit", or "Special Character"

ch = input("Enter a character: ")

if ch.isupper():
    print("Uppercase")
elif ch.islower():
    print("Lowercase")
elif ch.isdigit():
    print("Digit")
else:
    print("Special Character")
