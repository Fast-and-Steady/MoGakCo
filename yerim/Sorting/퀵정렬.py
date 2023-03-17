''' 퀵 정렬 코드 '''
array = [5, 7, 9, 0, 3, 1, 6, 2, 4, 8]


def quick_sort(array, start, end):
    if start >= end:  # 원소가 1개인 경우 종료
        return
    pivot = start  # pivot은 첫번쨰 데이터를 기준으로 함
    left = start + 1
    right = end
    while left <= right:
        # 피벗보다 큰 데이터가 있을 때까지 반복
        while left <= end and array[left] <= array[pivot]:
            left += 1
        # 피벗보다 작은 데이터가 있을 때까지 반복
        while right > start and array[right] >= array[pivot]:
            right -= 1
        # 엇갈렸다면 작은 데이터와 피벗과 교체
        if left > right:
            array[right], array[pivot] = array[pivot], array[right]
        # 엇갈리지않았다면 작은 데이터와 큰데이터 교체
        else:
            array[right], array[left] = array[left], array[right]

    # 분할 이후 왼쪽 부분과 오른쪽 부분에서 각각 정렬 수행
    quick_sort(array, start, right - 1)
    quick_sort(array, right + 1, end)


quick_sort(array, 0, len(array) - 1)
print(array)



''' 파이썬의 장점을 살린 퀵 정렬 코드 '''

array = [5, 7, 9, 0, 3, 1, 6, 2, 4, 8]


def py_quick_sort(array):
    if len(array) <= 1:
        return array

    pivot = array[0]
    tail = array[1:]

    left_side = [x for x in tail if x <= pivot]  # 분할된 부분 중 pivot보다 작은 부분
    right_side = [x for x in tail if x > pivot]  # 분할된 부분 중 pivot보다 큰 부분

    return py_quick_sort(left_side) + [pivot] + py_quick_sort(right_side)


print(py_quick_sort(array))
