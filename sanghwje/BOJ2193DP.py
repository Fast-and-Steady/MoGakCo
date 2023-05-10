N = int(input())
dp = [[0 for i in range(2)] for i in range(91)]
dp[0][0] = 0
dp[0][1] = 1
k = 1
while k < N:
    dp[k][0] += sum(dp[k-1])
    dp[k][1] += dp[k-1][0]
    k += 1
print(sum(dp[N-1]))

