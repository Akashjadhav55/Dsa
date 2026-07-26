# Q5: Shift all zeros to the end of the array.
# Input: Size n, then n integers
# Output: Array with zeros at end

n = int(input())
arr = list(map(int, input().split()))
non_zero = [x for x in arr if x != 0]
zeros = [0] * (n - len(non_zero))
result = non_zero + zeros
print(' '.join(map(str, result)))
