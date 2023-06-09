N = int(input())
A = list(map(int, input().split()))
dp = [[1 for i in range(N)] for j in range(N)]

for i in range(N):
    j = i - 1
    while j >= 0:
        if A[i] > A[j]:
            dp[i][j] += dp[j]
        j -= 1
    dp[i] = max(dp[i])

cnt = max(dp)
answer = []
i = N - 1
while i >= 0:
    if dp[i] == cnt:
        answer.append(A[i])
        cnt -= 1
    i -= 1
print(max(dp))
answer.reverse()
print(*answer)
