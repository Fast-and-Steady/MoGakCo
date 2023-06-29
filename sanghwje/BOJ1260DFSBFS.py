N, M, V = map(int, input().split())
relations = [[] for _ in range(M)]
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
                DFS(i)
                visits[i] = False
        else:
            break_point = True
            return

DFS(V)
print(answer)

