import sys
from collections import deque
import heapq
import math

t = int(input())

for i in range(t):
    k = int(input())
    arr = list(map(int, sys.stdin.readline().split()))
    heapq.heapify(arr)
    res = 0
    for j in range(len(arr)-1):
        tmp = 0
        tmp += heapq.heappop(arr)
        tmp += heapq.heappop(arr)
        heapq.heappush(arr, tmp)
        res += tmp
    print(res)