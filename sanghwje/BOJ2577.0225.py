A = int(input())
B = int(input())
C = int(input())
result = A*B*C
list2 = list(range(10) )
list1 = list(map(int, str(result))) #정수 쪼개기need review
list3 = []
for i in range(10):
    list3.append(0) #출력할 리스트
for i in list2:
    for j in list1:
        if i == j:
            list3[i] += 1
for i in list3:
    print(i)
