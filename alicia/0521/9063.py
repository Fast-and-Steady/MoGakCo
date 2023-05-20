n = int(input())
xset = set()
yset = set()

if n == 1:
    print('0')

else:
    for i in range(n):
        x, y = map(int, input().split())
        xset.add(x)
        yset.add(y)
    print(((max(xset))- min(xset)) * (max(yset) - min(yset)))