import sys

n, m = map(int, sys.stdin.readline().split())

A = []
B = []

for i in range(n):
    A.append(list(map(int, sys.stdin.readline().split())))

for i in range(n):
    B.append(list(map(int, sys.stdin.readline().split())))

result = []
for i in range(n):
    for j in range(m):
        print(A[i][j] + B[i][j], end = ' ')
    print()


