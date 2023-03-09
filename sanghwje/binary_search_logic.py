#이진 탐색 반복문 로직
def binary(arr, target):
    start = 0
    end = len(arr) - 1
    while start <= end:
        mid_index = start + end // 2
        if arr[mid_index] == target:
            return mid_index # target의 index
        elif arr[mid_index] > target:
            end = mid_index - 1
        elif arr[mid_index] < target:
            start = mid_index + 1
    return ("target은 arr에 없습니다.")
