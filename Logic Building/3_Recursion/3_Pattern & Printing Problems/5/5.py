# Q5: Print pattern of numbers recursively (1 to n each row).
# Input: An integer n
# Output: Number pattern

def print_nums(j):
    if j == 0:
        return
    print_nums(j - 1)
    print(j, end=" ")

def print_pattern(n, i):
    if i > n:
        return
    print_nums(i)
    print()
    print_pattern(n, i + 1)

n = int(input())
print_pattern(n, 1)
