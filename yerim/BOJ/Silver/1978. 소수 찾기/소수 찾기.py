import sys
from collections import deque
import heapq
import math

n = int(input())

lst = map(int, sys.stdin.readline().split())

cnt = 0
for i in lst:
    flag = 0
    if i == 1:
        flag = 1
    for j in range(2, i):
        if i % j == 0:
            flag = 1
            break
    if flag == 0:
        cnt += 1

print(cnt)