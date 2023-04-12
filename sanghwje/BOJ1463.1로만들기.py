X = int(input())
d = [0 for i in range(X+1)]
for i in range(2, X+1):
    d[i] = d[i - 1] + 1
    if i % 2 == 0:
        temp = d[i//2] + 1
        if d[i] > temp:
            d[i] = temp
    if i % 3 == 0:
        temp = d[i//3] + 1
        if d[i] > temp:
            d[i] = temp
print(d[X])
