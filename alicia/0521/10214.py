t = int(input())

for i in range(t):
    y, k = 0, 0
    for _ in range(9):
        yon, kor = map(int, input().split())
        y += yon
        k += kor
    
    if y > k :
        print('Yonsei')
    elif y < k:
        print('Korea')
    elif y == k:
        print('Draw')