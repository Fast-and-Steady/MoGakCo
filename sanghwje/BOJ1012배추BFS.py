from collections import deque

T = int(input())
dx = [0, -1, 0, 1]
dy = [-1, 0, 1, 0]

for _ in range(T):
    M, N, K = map(int, input().split()) #가로, 세로, 배추개수
    mymap = [[0 for _ in range(M)] for _ in range(N)]
    visits = [[0 for _ in range(M)] for _ in range(N)]
    dq = []
    dq = deque()
    count = 0
    for _ in range(K):
        Y, X = map(int, input().split())
        mymap[X][Y] = 1
    for i in range(N):
        for j in range(M):
            if visits[i][j] == 0 and mymap[i][j] == 1:
                dq.append([i, j])
                visits[i][j] = 1
                while dq:
                    x, y = dq.popleft()
                    for g in range(4):
                        nx = dx[g] + x
                        ny = dy[g] + y
                        if nx >= 0 and ny >= 0 and nx < N and ny < M:
                            if visits[nx][ny] == 0 and mymap[nx][ny] == 1:
                                dq.append([nx, ny])
                                visits[nx][ny] = 1
                else:
                    count += 1
    print(count)
    mymap.clear()
    visits.clear()
    dq.clear()


        
        
    
