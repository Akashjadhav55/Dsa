# Q10: Print all elements that appear more than once.
# Input: Size n, then n integers
# Output: Duplicate elements

from collections import OrderedDict

n = int(input())
arr = list(map(int, input().split()))
freq = OrderedDict()
for x in arr:
    freq[x] = freq.get(x, 0) + 1
for k, v in freq.items():
    if v > 1:
        print(k)
