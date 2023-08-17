from collections import deque
dq = []
dq = deque()
N, K = map(int, input().split())
dq.append(N)
visits = [0 for i in range(300001)]
visits[N] = 1

while dq:
    x = dq.popleft()

    dx = [1, -1, x]
    for i in range(3):
        nx = x + dx[i]
        if visits[nx] == 0 and nx < 150000 and nx >= 0:
            dq.append(nx)
            visits[nx] = visits[x] + 1
        if nx == K:
            print(visits[nx]-1)
            break
    else:
        continue
    break

