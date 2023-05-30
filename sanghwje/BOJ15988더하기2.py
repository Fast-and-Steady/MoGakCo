#1,2,3 더하기와 다른 점 -> 재귀x for문 O 
#pypy3
T = int(input())
for _ in range(T):
    N = int(input())
    if N > 4:      
        d = [0 for i in range(N+1)]
    else:
        d = [0 for i in range(5)]
    d[1] = 1
    d[2] = 2
    d[3] = 4
    d[4] = 7
    if d[N] == 0 and N != 0:
        for i in range(5, N+1):
            d[i] = d[i-3]%1000000009 + d[i-2]%1000000009 + d[i-1]%1000000009
    print(d[N]%1000000009)

