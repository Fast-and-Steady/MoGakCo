import sys
from collections import deque
import heapq

n = int(input())

  
lst = deque()
for i in range(n, 0, -1):
  lst.appendleft(i)
  for j in range(i):
    lst.rotate(1)

print(*lst)