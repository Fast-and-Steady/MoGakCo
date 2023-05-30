N = int(input())
DP = [[] for _ in range(N)]  # Initialize DP as a list of empty lists
for i in range(N):
    DP[i].extend(list(map(int, input().split())))
if N == 2:
    DP[1][0] += DP[0][0]
    DP[1][1] += DP[0][0]
if N >= 3:
    DP[1][0] += DP[0][0]
    DP[1][1] += DP[0][0]
    for i in range(2, N):
        DP[i][0] += DP[i-1][0]
        DP[i][i] += DP[i-1][i-1]
        for j in range(1, i):
            DP[i][j] = max(DP[i][j]+DP[i-1][j],DP[i][j]+DP[i-1][j-1])
print(max(DP[N-1]))


