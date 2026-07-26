# Q3: Validate a password (at least one uppercase, lowercase, digit, special char).
# Input: A password string
# Output: "Valid" or "Invalid"

pwd = input()
has_upper = any(c.isupper() for c in pwd)
has_lower = any(c.islower() for c in pwd)
has_digit = any(c.isdigit() for c in pwd)
has_special = any(not c.isalnum() for c in pwd)
print("Valid" if has_upper and has_lower and has_digit and has_special else "Invalid")
