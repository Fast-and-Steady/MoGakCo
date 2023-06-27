origen = [1, 1, 2, 2, 2, 8]
numero = list(map(int, input().split()))

for i in range(len(origen)):
    print(origen[i] - numero[i], end=' ')