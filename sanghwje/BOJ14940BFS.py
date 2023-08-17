from collections import deque
N, M = map(int, input().split())
arr = []
dq = []
dq = deque()
dx = [-1, 0, 1, 0]
dy = [0, -1, 0, 1]

visits = [[0 for _ in range(M)] for _ in range(N)]
for i in range(N):
    arr.append(list(map(int, input().split())))

for i in range(N):
    for j in range(M):
        if arr[i][j] == 2:
            dq.append([i, j])

while dq:
    x, y = dq.popleft()
    for i in range(4):
        nx = dx[i] + x
        ny = dy[i] + y
        if nx >= 0 and ny >= 0 and nx < N and ny < M and visits[nx][ny] == 0:
            if arr[nx][ny] == 1:
                dq.append([nx, ny])
                visits[nx][ny] = visits[x][y] + 1

for i in range(N):
    for j in range(M):
        if arr[i][j] == 1 and visits[i][j] == 0:
            visits[i][j] = -1

for i in range(N):
        print(*visits[i])
            


