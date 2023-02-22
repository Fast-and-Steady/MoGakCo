list1 = []
for i in range(5):
    list1.append(int(input()))
list1.sort()
print(sum(list1) // len(list1))
print(list1[2])
#list1의 평균값과, 중앙값을 출력하는 문제
#sum,len함수사용과, 전 문제와 마찬가지로 list입력
#그리고 sort함수사용을 익히는 문제였다.
