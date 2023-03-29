import sys
import heapq

N = int(sys.stdin.readline())
heap = []

for _ in range(N):
    num = int(sys.stdin.readline())

    if num != 0:
        heapq.heappush(heap,num)
    else:
        if heap:
            print(heapq.heappop(heap))
        else:
            print(0)