# Q1: Given marks of students, find how many passed (>= 40).
# Input: Number of students, then their marks
# Output: Count of students who passed

n = int(input())
marks = list(map(int, input().split()))
count = sum(1 for m in marks if m >= 40)
print(count)
