# Q9: Create a frequency array of numbers (count occurrence of each number).
# Input: Size n, then n integers
# Output: Frequency of each element

from collections import OrderedDict

n = int(input())
arr = list(map(int, input().split()))
freq = OrderedDict()
for x in arr:
    freq[x] = freq.get(x, 0) + 1
for k, v in freq.items():
    print(f"{k} -> {v}")
