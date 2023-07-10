from collections import deque
dq = deque()
N = int(input())
map = []
answer = []
visits = [[0 for _ in range(N)] for _ in range(N)]
dy = [-1, 1, 0, 0] #동 서 남 북  
dx = [0, 0, -1, 1]

def BFS(x,y):
    count = 0
    dq = []
    dq = deque()
    dq.append([x,y])
    visits[x][y] = 1
    while dq:
        x, y = dq.popleft()
        count += 1
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            if nx >= 0 and ny >= 0 and nx <= N-1 and ny <= N-1:
                if map[nx][ny] == '1' and visits[nx][ny] == 0:
                    dq.append([nx,ny])
                    visits[nx][ny] = 1
                    
    return count


for i in range(N):
    map.append(list(input())) # map 입력받기.

for i in range(N):
    for j in range(N):
        if map[i][j] == '1' and visits[i][j] == 0:
            answer.append(BFS(i,j))

answer.sort()
print(len(answer), *answer, sep = '\n')
    
    
    


