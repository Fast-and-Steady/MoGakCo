N = int(input())
d = [0 for i in range(N+1)]
def tiling(N):
    if N == 1:
        d[N] = 1
        return d[N]
    elif N == 2:
        d[N] = 2
        return d[N]
    elif d[N] != 0:
        return d[N]
    else:
        d[N] = tiling(N - 1) + tiling(N - 2) #메모이제이션이 제대로 될까?.
        return d[N]
tiling(N)
print(d[N] % 10007)
    
