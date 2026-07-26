# Q1: Print a multiplication table in a formatted grid (10x10).
# Input: None
# Output: 10x10 multiplication table

for i in range(1, 11):
    for j in range(1, 11):
        print(f"{i * j:4d}", end="")
    print()
