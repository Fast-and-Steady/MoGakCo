str = input()
count = 0
if str[0] != " ":
    count += 1
for i in range(len(str)-1):
    j = i + 1
    if str[i] == " " and str[j] != " ":
        count += 1
print (count)

#for i in str 인 경우, i가 문자가 됨.
#for 과 range를 같이써야 i를 인덱스로써 사용가능함
#만약 str이 int로 입력받았다면?배열을 어떻게 다룰까
