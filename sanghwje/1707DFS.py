K = int(input())
visits = [False] * 20001
num = [0 for _ in range(20001)]
for _ in range(K):
    break_point = False
    N,M = map(int,input().split())
    relations = [[] for _ in range(N+1)]
    for _ in range(M):
        a,b = map(int,input().split())
        relations[a].append(b)
        relations[b].append(a)
    
    def DFS(idx, num2):
        global break_point
        if not break_point:
            if num[idx] == 0:
                if num2 == 1:
                    num[idx] = 2
                else:
                    num[idx] = 1
            else:
                if num2 == num[idx]:
                    break_point = True
                    return
        else:
            return
    
        if not visits[idx]:
            visits[idx] = True
            for j in relations[idx]:
                DFS(j, num[idx])
    for i in range(1, N+1):
        DFS(i, 1)
        visits = [False] * 20001
        num = [0 for _ in range(20001)]
        if break_point:
            print('NO')
            break
    else:
        print('YES')
            




             
    
    

