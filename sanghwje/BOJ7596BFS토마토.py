from collections import deque
dq = []
dq = deque()
M, N, H = map(int, input().split())
mymap = [[] for _ in range(H)] #3차원 배열의 높이 부분.
day = [[[ 0 for _ in range(M)] for _ in range(N)] for _ in range(H)]
dz = [-1, 1]
dy = [-1, 1, 0, 0] # 위 아래 상 하 좌 우 탐색 index
dx = [0, 0, -1, 1]


for i in range(H):
    for j in range(N):
        mymap[i].append(list(map(int, input().split()))) #각판에다가 입력값 추가.

count = 0
for i in range(H):        #덱에 넣어줌과 동시에, 다 익지 못하는 조건일 시 프로그램 종료
    for j in range(N):
        for k in range(M):
            if mymap[i][j][k] == 1:
                dq.append([i, j, k])
                day[i][j][k] = 1
                count += 1
            
if count == 0:
    print(-1)
    exit(0)
    

while dq:
    z, x, y = dq.popleft()
    for j in range(4):
        nx = dx[j] + x
        ny = dy[j] + y
        if nx >= 0 and nx < N and ny >= 0 and ny < M:
            if day[z][nx][ny] == 0 and mymap[z][nx][ny] == 0:
                dq.append([z, nx, ny])
                mymap[z][nx][ny] = 1
                day[z][nx][ny] = day[z][x][y] + 1
    for k in range(2):
        nz = dz[k] + z #위랑 nx, ny가 아니라 위만, 아래만
        if nz >= 0 and nz < H:
            if day[nz][x][y] == 0 and mymap[nz][x][y] == 0:
                dq.append([nz, x, y])
                mymap[nz][x][y] = 1
                day[nz][x][y] = day[z][x][y] + 1

res = 0
for i in range(H):
    for j in range(N):
        for k in range(M):
            if mymap[i][j][k] == 0:
                print(-1)
                exit(0)
        res = max(res, max(day[i][j]))
else:
    print(res - 1)
    




