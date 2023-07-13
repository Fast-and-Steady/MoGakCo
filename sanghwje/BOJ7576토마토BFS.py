from collections import deque
M, N = map(int, input().split())
my_map = []  # map, visits 생성
for i in range(N):
    my_map.append(list(map(int, input().split())))
visits = [[0 for i in range(M)] for j in range(N)]
dq = []
dq = deque()
dy = [-1, 1, 0, 0] # 상 하 좌 우 탐색 index
dx = [0, 0, -1, 1] 

count = 0
for i in range(N):
    for j in range(M):
        if my_map[i][j] == 1:
            dq.append([i, j])
            visits[i][j] = 1
        elif my_map[i][j] == 0:
            count += 1
if count == 0:
    print(0)
    exit(0)
while dq:
    day = 1
    x,y = dq.popleft()
    for i in range(4):
        nx = dx[i] + x
        ny = dy[i] + y
        if nx >= 0 and ny >= 0 and nx < N and ny < M:
            if visits[nx][ny] == 0 and my_map[nx][ny] == 0:
                dq.append([nx,ny])
                my_map[nx][ny] = 1
                visits[nx][ny] = visits[x][y] + 1
    day += 1
res = 0
for i in range(N):
    for j in range(M):
        if my_map[i][j] == 0:
            print(-1)
            exit(0)
    res = max(res, max(visits[i]))

else:
    print(res - 1)
