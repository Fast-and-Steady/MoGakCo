N = int(input())
def factorial(N):
    if N == 0:
        return 1
    else:
        return N * factorial(N-1)
num_answer = factorial(N)
str_answer = str(num_answer)
cnt = 0
i = len(str_answer) -1
while i >= 0:
    if str_answer[i] != "0":
        break
    else:
        cnt += 1
    i -= 1
print(cnt)
    

