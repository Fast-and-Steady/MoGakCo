import sys
from collections import deque

import heapq

t = int(input())

res = []

for _ in range(t):
  n,m = map(int, sys.stdin.readline().split())
  que = deque(list(map(int, sys.stdin.readline().split())))
  idx = deque(range(n))
  cnt = 0
  while(True):
    if que[0] == max(que):
      cnt += 1
      if idx[0] == m:
        print(cnt)
        break
      que.popleft()
      idx.popleft()
    else:
      que.append(que.popleft())
      idx.append(idx.popleft())

    