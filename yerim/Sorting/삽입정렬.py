array = [7, 5, 9, 0, 3, 1, 6, 2, 4, 8]

# 0번째는 이미 정렬이 되어 있다고 가정
for i in range(1, len(array)):
    for j in range(i, 0, -1):  # i 번째부터 거꾸로 오면서 탐색
        if array[j] < array[j - 1]:
            array[j], array[j - 1] = array[j - 1], array[j]
        else:
            break  # 자기보다 작은 데이터를 만나면 멈춤

print(array)
