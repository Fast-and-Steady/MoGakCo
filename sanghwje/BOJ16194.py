N = int(input())
p = list(map(int, input().split()))
a = []
d = [0] * (N+1)
for i in range(N):
    for j in range(i+1):
        a.append(d[(i+1)-(j+1)]+ p[j])
    d[i+1] = min(a)
    a.clear()
print(d[N]) 

