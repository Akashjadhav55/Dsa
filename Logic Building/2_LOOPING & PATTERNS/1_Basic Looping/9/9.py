# Q9: Print the factorial of a given number.
# Input: An integer n
# Output: n! (factorial)

n = int(input())
fact = 1
for i in range(1, n + 1):
    fact *= i
print(fact)
