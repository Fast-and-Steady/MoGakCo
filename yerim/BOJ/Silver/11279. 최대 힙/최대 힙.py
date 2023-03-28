import sys
from collections import deque

import heapq
N = int(sys.stdin.readline())
heap = []

for _ in range(N):
    num = int(sys.stdin.readline())

    if num != 0:
        heapq.heappush(heap, -1 * num)
    else:
        if heap:
            print(heapq.heappop(heap) * (-1))
        else:
            print(0)