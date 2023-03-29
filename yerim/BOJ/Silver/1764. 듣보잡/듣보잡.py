import sys
from collections import deque

import heapq

n, m = map(int, sys.stdin.readline().split())
a = []
b = []

for i in range(n):
    a.append(sys.stdin.readline())

for i in range(m):
    b.append(sys.stdin.readline())

a = set(a)
b = set(b)
res = list(a&b)
res.sort()

print(len(res))
for i in res:
    print(i, end = '')
