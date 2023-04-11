a_str = list(input())
answer = []

for i in range(len(a_str)):
    answer.append("".join(a_str))
    a_str = a_str[1:] 
answer.sort()
for i in range(len(answer)):
    print(answer[i])
