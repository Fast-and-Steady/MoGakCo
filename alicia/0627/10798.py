a = [[0] * 15 for i in range(5)]

for i in range(5):
    b = list(input())
    len_b = len(b)
    for j in range(len_b):
        a[i][j] = b[j]
for i in range(15):
    for j in range(5):
        if a[j][i] == 0:
            continue
        else:
            print(a[j][i], end='')