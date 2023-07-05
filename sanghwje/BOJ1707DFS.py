import sys            # (중요) Recursion 늘리기!!!
K = int(sys.stdin.readline())
for _ in range(K):
    break_point = False
    N,M = map(int,sys.stdin.readline().split())
    visits = [0] * (N+2)
    relations = [[] for _ in range(N+2)]
    for _ in range(M):
        a,b = map(int,sys.stdin.readline().split())
        relations[a].append(b)
        relations[b].append(a)
    
    def DFS(idx, visits_num):
        global break_point
        for j in relations[idx]:
            if visits[idx] == 0:
                if visits_num == -1:
                    visits[idx] = 1
                else:
                    visits[idx] = -1
                DFS(j, visits[idx])
            else:
                if visits_num == visits[idx]:
                    break_point = True
                    return
    for i in range(1, N+1):
        if not break_point:
            if visits[i] == 0:
                DFS(i, 1)
        else: 
            print('NO')
            break
    else:
        visits = [0] * (N+1)
        print('YES')
            
