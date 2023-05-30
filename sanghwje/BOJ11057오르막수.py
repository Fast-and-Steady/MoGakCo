N = int(input())
d = [[0 for i in range(10)] for j in range(N+1)]
for i in range(10):
    d[1][i] = 1
for r in range(2, N+1):
    for i in range(10):
        for j in range(i+1):
            d[r][i] += d[r-1][j]
print(sum(d[N])%10007)
