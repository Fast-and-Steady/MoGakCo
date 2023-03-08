N = int(input())
tung = [0 for i in range(N)]
for i in range(N):
    tung[i] = list(map(int,input().split()))    
new_tung = [0 for i in range(N)]
for i in range(N):
    count = 0
    for j in range(N):
        if tung[i][0] < tung[j][0] and tung[i][1] < tung[j][1]:
            count += 1
    new_tung[i] = count + 1
for i in new_tung:
    print(i)

