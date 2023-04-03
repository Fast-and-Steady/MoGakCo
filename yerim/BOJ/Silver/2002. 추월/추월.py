import sys
from collections import deque
import heapq
import math

n = int(input())
a = []
b = []
for i in range(n):
    a.append(input())
for i in range(n):
    b.append(input())

a = dict(zip(a,[i for i in range(len(a))]))
cnt = 0

for i in range(len(b)):
    for j in range(i+1, len(b)):
        if a[b[i]] > a[b[j]]:
            cnt += 1
            break
print(cnt)