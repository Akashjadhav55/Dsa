# Q2: Take age inputs and count how many are adults, minors, seniors.
# Input: Number of people, then their ages
# Output: Count of adults (18-60), minors (<18), seniors (>60)

n = int(input())
ages = list(map(int, input().split()))
adults = sum(1 for a in ages if 18 <= a <= 60)
minors = sum(1 for a in ages if a < 18)
seniors = sum(1 for a in ages if a > 60)
print(f"Adults: {adults}")
print(f"Minors: {minors}")
print(f"Seniors: {seniors}")
