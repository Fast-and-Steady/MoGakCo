import sys
from collections import deque
import heapq
import math

n = int(input())
tmp = []

for i in range(1, n+1):
    res = sum(map(int, str(i)))
    res += i
    if res == n:
        tmp.append(i)
if tmp:
    print(min(tmp))
else:
    print(0)