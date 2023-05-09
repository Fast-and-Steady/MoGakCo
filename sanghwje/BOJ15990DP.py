T = int(input())
dp = [[0 for k in range(3)] for r in range(100001)]
j = 3
dp[0][0]=dp[1][1]=dp[2][0]=dp[2][1]=dp[2][2] = 1
dp[0][1]=dp[0][2]=dp[1][0]=dp[1][2] = 0
while j <= 100000:
    dp[j][0] = dp[j-1][1]%1000000009 + dp[j-1][2]%1000000009
    dp[j][1] = dp[j-2][2]%1000000009 + dp[j-2][0]%1000000009
    dp[j][2] = dp[j-3][0]%1000000009+ dp[j-3][1]%1000000009
    j += 1
for i in range(T):
    N = int(input())
    answer = (sum(dp[N-1])%1000000009)
    print(answer)
