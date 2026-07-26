# Q5: Find LCM of two numbers using loops.
# Input: Two integers
# Output: LCM of the two numbers

a, b = map(int, input().split())
max_val = max(a, b)
while True:
    if max_val % a == 0 and max_val % b == 0:
        print(max_val)
        break
    max_val += 1
