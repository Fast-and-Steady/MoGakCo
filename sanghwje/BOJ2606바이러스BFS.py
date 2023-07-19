from collections import deque
count = 0
dq = []
dq = deque()
N = int(input())
T = int(input())
relations = [[] for _ in range(N+1)]
visits = [False] * (N + 1)
for i in range(T):
    a, b = map(int , input().split())
    relations[a].append(b)
    relations[b].append(a)
visits[1] = True
for i in relations[1]:
    dq.append(i)
    visits[i] = True
    count += 1

while dq:
    for i in relations[dq.popleft()]:
        if not visits[i]:
            dq.append(i)
            visits[i] = True
            count += 1
print(count)
    # 1 = 2, 5
    # 2x = 3, 5
    # 3 = 2
    # 5 = 2, 6, 1
    # 6= 5






