#about DP
N = int(input())
A = list(map(int, input().split()))
D = []
D.append(A[0])
for i in range(1,N):
    if A[i] >= D[i-1] + A[i]:
        D.append(A[i])
    else:
        D.append(D[i-1] + A[i])
print(max(D))
    
