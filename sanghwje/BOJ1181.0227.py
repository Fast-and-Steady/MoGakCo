N = int(input())
arr = []
for i in range(N):
    A = input()
    arr.append(A)
arr = set(arr) # set함수의 두가지 특징과 사용법
arr = list(arr) # 왜 list로 다시 감싸주었는지
arr.sort() #sort는 많이쓰이네
arr = sorted(arr, key = len) # 처음써본 sorted + ket
for i in arr:
    print(i)

