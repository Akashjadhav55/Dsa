# Q6: Convert a number to binary recursively.
# Input: An integer
# Output: Binary representation

def to_binary(n):
    if n <= 1:
        return str(n)
    return to_binary(n // 2) + str(n % 2)

n = int(input())
print(to_binary(n))
