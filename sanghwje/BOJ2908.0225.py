a, b = map(int,input().split())
list1 = list(map(int, str(a))) #리스트쪼개기
list2 = list(map(int, str(b))) #리스트쪼개기
copy_list1 = list1.copy() #copy함수
copy_list2 = list2.copy() #copy함수
i = len(list1) - 1
j = 0
while i >= 0:
    list1[j] = copy_list1[i]
    list2[j] = copy_list2[i]
    i -= 1
    j += 1
list1 = "".join(map(str,list1)) #int로 쪼갠 리스트를 문자열로 합친다
list2 = "".join(map(str,list2)) #int로 쪼갠 리스트를 문자열로 합친다
if int(list1) > int(list2):
    print(int(list1))
else:
    print(int(list2))
# 모든 코드 리뷰해야됨.
# 특히 int로 받은 값을 list로 쪼개주고, 다시 문자열list로 join하는 것.
