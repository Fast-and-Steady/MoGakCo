# 고장난 버튼 제외 N의 가장 가까운 수를 찾는다
# 아래부터, 위부터의 각각의 상황의 횟수를 찾고 min
# 100부터 카운터한 것도 찾는다
N = int(input())
broken = int(input())
broken_num = list(map(int, input().split()))
cnt_all = cnt_2 = cnt_3 = 0
if N > 100:
    first = 100
    while 1:
        if N == first:
            break
        cnt_all += 1
        first += 1
else:
    first = 100
    while 1:
        if N == first:
            cnt_all += 1
            first -= 1

