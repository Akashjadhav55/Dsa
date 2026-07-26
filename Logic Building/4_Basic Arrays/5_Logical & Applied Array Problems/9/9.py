# Q9: Print the frequency of each distinct element.
# Input: Size n, then n integers
# Output: Each element and its frequency

from collections import OrderedDict

n = int(input())
arr = list(map(int, input().split()))
freq = OrderedDict()
for x in arr:
    freq[x] = freq.get(x, 0) + 1
for k, v in freq.items():
    print(f"{k} {v}")
