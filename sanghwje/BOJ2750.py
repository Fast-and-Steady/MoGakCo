N = int(input())
list1 = []
for i in range(N):
    list1.append(int(input()))
list1.sort()
for i in list1:
    print(i)
#지정된 범위만큼 리스트에 넣고싶다면, 
#append(input())을 기억하자.
#list입력받는 것이 항상 한번에 안되더라
