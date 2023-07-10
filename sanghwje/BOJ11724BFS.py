from collections import deque

D = deque()
N, M = map(int, input().split())
visits = [False] * 1001

answer = [[] for _ in range(N)]
relations = [[] for _ in range(N+1)]
for i in range(M):
    a, b = map(int, input().split())
    relations[a].append(b)
    relations[b].append(a)
    
for i in range(N):
    answer[i].append(i+1)
    D.append(i+1)
    visits[i+1] = True
    while D:
        for j in relations[D.popleft()]:
            if not visits[j]:
               visits[j] =True
               D.append(j)
               answer[i].append(j) 
    visits = [False] * 1001

for i in range(len(answer)):
    answer[i].sort()

answer = list(map(list, set(map(tuple, answer))))
print(len(answer))




    

    
