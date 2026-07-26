# Q9: Count how many numbers are divisible by 3 and 5 both.
# Input: Size n, then n integers
# Output: Count of numbers divisible by 15

n = int(input())
arr = list(map(int, input().split()))
print(sum(1 for x in arr if x % 3 == 0 and x % 5 == 0))
