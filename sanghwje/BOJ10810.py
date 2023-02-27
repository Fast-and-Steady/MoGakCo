N, M = map(int,input().split())
list1 = []
for i in range(N):
    list1.append(0)
for i in range(M):
    a,b,c = map(int,input().split())
    a_index = a
    for j in range((b-a)+1):
        list1[a_index-1] = c
        a_index += 1
print(*list1)
#반복문을 통해 lis1을 0으로 초기화
#print(*list1)을 하게되면 인덱스만 출력하게됨.
