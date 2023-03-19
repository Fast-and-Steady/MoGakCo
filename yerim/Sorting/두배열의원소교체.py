import sys

n, k = map(int, sys.stdin.readline().split())
A_array = list(map(int, sys.stdin.readline().split()))
B_array = list(map(int, sys.stdin.readline().split()))

A_array.sort()
B_array = sorted(B_array, reverse=True)

# 첫 번째 인덱스부터 확인하며, 두 배열의 원소를 최대 K번 비교
for i in range(k):
    # A의 원소가 B의 원소보다 작은 경우
    if A_array[i] < B_array[i]:
        # 두 원소를 교체
        A_array[i], B_array[i] = B_array[i], A_array[i]
    else:  # A의 원소가 B의 원소보다 크거나 같을 때, 반복문을 탈출
        break

print(sum(A_array))

'''
for i in range(k):
    # A의 가장 작은 수
    min_num = min(A_array)
    A_array.remove(min_num)
    # B의 가장 큰 수
    max_num = max(B_array)
    B_array.remove(max_num)
    A_array.append(max_num)
    B_array.append(min_num)

print(sum(A_array))
'''
