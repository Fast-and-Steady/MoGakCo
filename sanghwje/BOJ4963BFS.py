from collections import deque
dq = deque()
dx = [-1, -1, -1, 0, 1, 1, 1, 0]
dy = [-1, 0, 1, 1, 1, 0, -1, -1]

def BFS(x,y):
    dq = []
    dq = deque()
    dq.append([x,y])
    while dq:
        x, y = dq.popleft()
        for i in range(8):
            nx = x + dx[i]
            ny = y + dy[i]
            if nx < h and ny < w and nx >= 0 and ny >= 0:
                if my_map[nx][ny] == 1 and visits[nx][ny] == 0:
                    dq.append([nx, ny])
                    visits[nx][ny] = 1
            
while 1:
    my_map = []
    my_map.clear()
    count = 0
    w, h = map(int, input().split())
    if w == 0 and h == 0:                # 0 0 들어오면 프로그램 종료
        break
    visits = [[0 for _ in range(w)] for _ in range(h)]     # visits체크함수 생성

    for i in range(h):
        my_map.append(list(map(int, input().split())))        # map 입력받기 
        
    for i in range(h):
        for j in range(w):
            if visits[i][j] == 0 and my_map[i][j] == 1:  # BFS함수 들어가기 전 조건 
                visits[i][j] = 1
                BFS(i,j)
                count += 1
    print(count)
    
        
