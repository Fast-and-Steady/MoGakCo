import sys
from collections import deque
import heapq
import math

n, m = map(int, sys.stdin.readline().split())
print(math.gcd(n,m))
print(math.lcm(n,m))