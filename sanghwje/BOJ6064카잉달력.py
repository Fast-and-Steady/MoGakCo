
T = int(input())

for i in range(T):
    M, N, X, Y = map(int,input().split())

    if M == 1 and N == 1:
        print(1)
        continue

    for j in range(N):
        year = M*j + X
        if Y != N:
            if Y == year % N:
                print(year)
                break
        else:
            if year % N == 0:
                print(year)
                break
    else:
        print(-1)
    
    
