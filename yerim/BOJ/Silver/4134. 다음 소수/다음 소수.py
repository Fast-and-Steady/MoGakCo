import sys
from collections import deque
import heapq
import math

n = int(input())

lst = []
for i in range(n):
    lst.append(int(input()))

def is_prime(num):
    if num < 2:
        return 0
    for i in range(2, int(math.sqrt(num))+1):
        if num % i == 0:
            return 0
            break

    return 1


for num in lst:
    while True:
        if is_prime(num) == 1:
            break
        else:
            num += 1
    print(num)