#BOJ 2738
x, y = [], []
n, m = map(int, input().split())

for row in range(n):
    row = list(map(int, input().split()))
    x.append(row)

for row in range(n):
    row = list(map(int, input().split()))
    y.append(row)

for row in range(n):
    for column in range(m):
        print(x[row][column] + y[row][column], end = ' ')
    print()