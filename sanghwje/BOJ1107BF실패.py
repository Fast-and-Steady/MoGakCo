# 고장난 버튼 제외 N의 가장 가까운 수를 찾는다
# 아래부터, 위부터의 각각의 상황의 횟수를 찾고 min
# 100부터 카운터한 것도 찾는다
N = int(input())
broken = int(input())
broken_num = list(map(int, input().split()))
A = []
for i in range(10):
    A.append(i)
for i in range(len(broken_num)):
    A.remove(broken_num[i])
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
            break
        cnt_all += 1
        first -= 1
copy_N = N
min_nums = []
closest = 100
if N != 0:
    while N > 0:
        min_num = 100
        num = N % 10
        for i in range(len(A)):
            nums = abs(num - A[i])
            if nums < min_num:
                min_num = nums
                closest = A[i]
        min_nums.append(closest)
        N = N // 10
    min_nums.reverse()
else:
    min_num = 100
    num = N % 10
    for i in range(len(A)):
        nums = abs(num - A[i])
        if nums < min_num:
            min_num = nums

