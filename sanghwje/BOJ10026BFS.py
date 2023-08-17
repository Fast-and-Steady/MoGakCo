from collections import deque
dq = []
dq = deque()
N = int(input())
mymap = []
answer = 0
for _ in range(N):
    mymap.append(list(input()))
visits = [[0 for _ in range(N)] for _ in range(N)]

dx = [-1, 0, 1, 0]
dy = [0, 1, 0, -1]

for i in range(N):
    for j in range(N):
        if visits[i][j] == 0:
            answer += 1
            dq.append([i,j])
            visits[i][j] = 1

            while dq:
                x, y = dq.popleft()
                for k in range(4):
                    nx = dx[k] + x
                    ny = dy[k] + y
                    if nx >= 0 and nx < N and ny >= 0 and ny < N and visits[nx][ny] == 0 and mymap[x][y] == mymap[nx][ny]:
                        dq.append([nx, ny])
                        visits[nx][ny] = 1

#적록색맹의 answer 
visits = [[0 for _ in range(N)] for _ in range(N)] #초기화
sec_answer = 0
for i in range(N):
    for j in range(N):
        if visits[i][j] == 0:
            sec_answer += 1
            dq.append([i,j])
            visits[i][j] = 1
            
            while dq:
                x, y = dq.popleft()
                for k in range(4):
                    nx = dx[k] + x
                    ny = dy[k] + y
                    if nx >= 0 and nx < N and ny >= 0 and ny < N and visits[nx][ny] == 0:
                        if mymap[x][y] == "R" or mymap[x][y] == "G":
                            if mymap[nx][ny] == "R" or mymap[nx][ny] == "G":
                                dq.append([nx, ny])
                                visits[nx][ny] = 1
                                count = 1

                        elif mymap[nx][ny] == mymap[x][y]:
                            dq.append([nx, ny])
                            visits[nx][ny] = 1
                            count = 1

                    
print(answer, sec_answer)
                        



