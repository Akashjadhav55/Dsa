# Q9: Print sum of series 1 + 2 + 3 + ... + n recursively and display each step.
# Input: An integer n
# Output: Running sum at each step

def print_series(n):
    if n == 0:
        return 0
    return n + print_series(n - 1)

n = int(input())
terms = " + ".join(str(i) for i in range(1, n + 1))
print(f"{terms} = {print_series(n)}")
