N = int(input())
dp = [[0 for k in range(10)] for r in range(101)]
for q in range(10):
    dp[0][q] = 1
dp[0][0] = 0
i = 1
while i < 100:
    for j in range(10):
        if j != 9 and j != 0:
            dp[i][j] = dp[i-1][j+1] + dp[i-1][j-1]
        else: 
            if j == 9:
                dp[i][j] += dp[i-1][j-1]
            else:
                dp[i][j] += dp[i-1][j+1]
    i += 1
print(sum(dp[N-1])%1000000000)
