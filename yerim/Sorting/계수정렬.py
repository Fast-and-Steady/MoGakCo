# 모든 원소의 값이 0보다 크거나 같다고 가정
array = [7, 5, 9, 0, 3, 1, 6, 2, 9, 1, 4, 8, 0, 5, 2]

cnt = [0] * (max(array) + 1)

for i in range(len(array)):
    cnt[array[i]] += 1

for i in range(len(cnt)):
    for j in range(cnt[i]):
        print(i, end=' ')  # 띄어쓰기를 구분으로 cnt에 저장된 횟수만큼 인덱스 출력
