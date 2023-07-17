from collections import deque
dq = []
dq = deque()
dx = [0, -1, 0, 1]
dy = [-1, 0, 1, 0]
flag = 0

N, M = map(int, input().split())
my_map = []
visits = [[0 for _ in range(M)] for _ in range(N)]
for i in range(N):
    my_map.append(list(input()))

def DFS(x, y):
    global flag
    if flag == 1:
        return
    for g in range(4):
        gx = dx[g] + x
        gy = dy[g] + y
        if gx >= 0 and gy >= 0 and gx < N and gy < M and my_map[x][y] == my_map[gx][gy]:
            if visits[gx][gy] == 0:
                visits[gx][gy] = visits[x][y] + 1
                DFS(gx, gy)
            elif abs((visits[x][y] - visits[gx][gy]) >= 3):
                flag = 1
                return
            
for i in range(N):
    for j in range(M):
        if flag == 1:
            print("Yes")
            exit(0)
        if visits[i][j] == 0:
            DFS(i, j)
else:
    print("No")
                           


    
    
