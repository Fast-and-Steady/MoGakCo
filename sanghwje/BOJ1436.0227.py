N = int(input())
x = 666
count = 0
while 1:
    issix = 0
    if "666" in str(x):
        count += 1
    if count == N:
        break
    x += 1
print(x)

