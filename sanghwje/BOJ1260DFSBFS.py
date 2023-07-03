from collections import deque

D = deque()

N, M, V = map(int, input().split())
relations = [[] for _ in range(N+1)]
answer = []
visits = [False] * 1001
break_point = False
for i in range(M):
    a,b = map(int, input().split())
    relations[a].append(b)
    relations[b].append(a)
for i in range(len(relations)):
    relations[i].sort()

def DFS(idx):
    global break_point
    if not break_point:
        visits[idx] = True
        answer.append(idx)
        for i in relations[idx]:
            if not visits[i]:
                visits[i] = True
                DFS(i)
        else:
            return
    

DFS(V)
visits[V] = False
print(*answer)
visits = [False] * 1001
answer.clear()


answer.append(V)
D.append(V)
visits[V] = True
while D:
    for i in relations[D.popleft()]:
        if not visits[i]:
            D.append(i)
            answer.append(i)
            visits[i] = True
print(*answer)

