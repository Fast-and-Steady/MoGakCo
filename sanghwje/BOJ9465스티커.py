#max_val = max(dp[k][1], dp[k][2], dp[k-1][0]+dp[k][1], dp[k-1][0] +dp[k][2]) 
N2 = int(input())
for i in range(N2):
    N = int(input()) # 2 * N
    d = list(map(int, input().split()))
    d2 = list(map(int, input().split()))
    dp = [[0 for k in range(3)] for p in range(N+1)]
    for k in range(1, N+1):
        dp[k][1] = d[k-1]
        dp[k][2] = d2[k-1]
    for k in range(1, N+1):
        dp[k][0] = max(dp[k-1][1], dp[k-1][2])
        a = dp[k][1] + dp[k-1][2]
        b = dp[k][2] + dp[k-1][1]
        c = dp[k-1][0] + dp[k][1]
        c2 = dp[k-1][0] + dp[k][2]
        dp[k][1] = max(a, c)
        dp[k][2] = max(b, c2)
    print(max(dp[N]))


