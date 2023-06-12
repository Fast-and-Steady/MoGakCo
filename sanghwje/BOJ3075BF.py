# 오른쪽, 아래쪽으로 교환하면서 최대길이 구하기
# 그럼 NEWS방향 전부 교환됨
#swap -> a, b = b, a
N = int(input())
bf = [] # N * N 의 배열
max_eat = 1 #  같은 색으로 이루어져 있는 가장 긴 연속 부분 카운트
cnt_eat = 1
cnt2_eat = 1
for i in range(N):
    bf.append(input())

for i in range(N): # 교환하기 전의 최대길이 구하기
    for j in range(1, N):
        if bf[i][j] == bf[i][j-1]:
            cnt_eat += 1
        if bf[j][i] == bf[j][i-1]:
            cnt2_eat += 1
    if max_eat < max(cnt_eat, cnt2_eat):
        max_eat = max(cnt_eat, cnt2_eat)

