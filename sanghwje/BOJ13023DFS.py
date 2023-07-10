N,M = map(int, input().split())

relations = [[] for _ in range(M)]

for i in range(M):
    a,b = map(int, input().split())
    relations[a].append(b)
    relations[b].append(a)
    
