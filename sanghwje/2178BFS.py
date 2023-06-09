from collections import deque

n, m  = map(int, input().split())
map = []
visited = [[0 for i in range(m)] for j in range(n)]
for i in range(n):
    num = input()
    arr = [int(j) for j in num] # gpt
    map.append(arr)

# 여기까지는 지도 입력

dx = [1, 0, -1, 0]
dy = [0, 1, 0, -1]
dq = deque()

# 배열 뚫는 거 처리
# 0 만났을 때 처리
# 큐 있는지 처리 -> 이미 전에 방문했었는지 체크

dq.append([0, 0])
visited[0][0] = 1
while dq:
    cur = dq.popleft()
    if cur[0] == n - 1 and cur[1] == m - 1:
        break
    for i in range(4):
        nx = cur[0] + dx[i]
        ny = cur[1] + dy[i]
        if nx < 0 or nx >= n or ny < 0 or ny >= m:
            continue
        if map[nx][ny] == 0:
            continue
        if visited[nx][ny] != 0:
            continue
        dq.append([nx, ny])
        visited[nx][ny] = visited[cur[0]][cur[1]] + 1

print(visited[n - 1][m - 1])

