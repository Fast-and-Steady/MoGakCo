m = []
for i in range(12):
    m.append([])
    for j in range(12):
        m[i].append(0)

for i in range(10):
    a = input().split()
    for j in range(10):
        m[i+1][j+1] = int(a[j])
        