listx = []
listy = []

for _ in range(3):
    x, y = map(int, input().split())
    listx.append(x)
    listy.append(y)

for i in range(3):
    if (listx.count(listx[i]) == 1):
        x4 = listx[i]
    if (listy.count(listy[i]) == 1):
        y4 = listy[i]

print(x4, y4)