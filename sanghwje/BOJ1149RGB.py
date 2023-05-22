# d[i][0], d[i][1], d[i][2] 이 포함된 점화식을 한번에 돌리면 되는구나..
# d[i][0] 을 구할 때, d[i-1][1], d[i-1][2] 들이 채워지나? 라는 생각 
N = int(input())
A = []
for _ in range(N):
    A.append(list(map(int, input().split())))
d = [[0 for i in range(3)] for j in range(N+1)]
for i in range(1,N+1):
    d[i][0] = min(d[i-1][1],d[i-1][2]) + A[i-1][0]
    d[i][1] = min(d[i-1][0],d[i-1][2]) + A[i-1][1]
    d[i][2] = min(d[i-1][1],d[i-1][0]) + A[i-1][2]
print(min(d[N]))

    
