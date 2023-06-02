N = int(input())
A = list(map(int, input().split()))
dp = [[1 for i in range(N)] for j in range(N)]
for i in range(N - 1): # 1차 반복, 마지막인덱스는 뒤에 검사할게 없음
    dp[i] = max(dp[i])
    j = i + 1
    while j < N: # 2차 반복, 2차는 마지막까지 검사 해야 함. A[i] 작은 것을 찾는 것이기 때문
        if A[i] > A[j]: # A[i] 작은 것을 찾는다면,
            dp[j][i] += dp[i]
        j+= 1
dp[N-1] = max(dp[N-1])
print(max(dp))
