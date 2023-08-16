from collections import deque
dq = []
dq = deque()
N, M = map(int , input().split())
relations = [[] for _ in range(N+1)]
visits = [0 for _ in range(N+1)]
for _ in range(M):
    A, B = map(int, input().split())
    relations[A].append(B)
    relations[B].append(A)

def BFS(x):
    ans = 0
    dq.append(x)
    while dq:
        tar = dq.popleft()
        for i in relations[tar]:
            if not visits[i] and i != x:
                dq.append(i)
                visits[i] = (visits[tar]) + 1
    for k in range(1, N+1):
        ans += visits[k]
    return ans

res = []
for i in range(1, N+1):
    x= BFS(i)
    res.append(x)
    visits = [0 for _ in range(N+1)]



    
    
print(res.index(min(res)) + 1)






    












