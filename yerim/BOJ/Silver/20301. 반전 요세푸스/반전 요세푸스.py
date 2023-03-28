## template
import sys
from collections import deque
import heapq

n,k,m = map(int, sys.stdin.readline().split())
que = deque(range(1, n+1))

flag = 0
cnt = 0
for _ in range(n):
  if flag == 0:
    que.rotate(-k)
    print(que.pop())
  elif flag == 1:
    que.rotate(k)
    print(que.popleft())
    
  cnt += 1
  if cnt % m == 0 and flag == 0:
    flag = 1
  elif cnt % m == 0 and flag == 1:
    flag = 0
