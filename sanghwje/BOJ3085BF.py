# 오른쪽, 아래쪽으로 교환하면서 최대길이 구하기
# 그럼 NEWS방향 전부 교환됨
#swap -> a, b = b, a
N = int(input())
bf = [] # N * N 의 배열
for i in range(N):
    bf.append(input())
for i in range(N):
    bf[i] =list(bf[i])
def find_eat(i, j):
    cnt_eat = 1
    cnt_eat2 = 1
    for k in range(1, N):
        if bf[i][k-1] == bf[i][k]:
            cnt_eat += 1
    for m in range(1, N):
        if bf[m][j] == bf[m-1][j]:
            cnt_eat2 += 1

    if max(cnt_eat, cnt_eat2):
        return max(cnt_eat, cnt_eat2)

max_eat = 1
for i in range(N):
    for j in range(1, N):
        bf[i][j-1], bf[i][j] = bf[i][j], bf[i][j-1]
        if max_eat < max(find_eat(i, j -1), find_eat(i, j)):
            max_eat =  max(find_eat(i, j -1), find_eat(i, j))
        bf[i][j-1], bf[i][j] = bf[i][j], bf[i][j-1]

    for m in range(1, N):
        bf[m][i], bf[m-1][i] = bf[m-1][i], bf[m][i]
        if max_eat < max(find_eat(m, i), find_eat(m-1, i)):
            max_eat =  max(find_eat(m, i), find_eat(m-1, i))
        bf[m][i], bf[m-1][i] = bf[m-1][i], bf[m][i]
print(max_eat)



