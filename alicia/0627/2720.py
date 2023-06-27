changes = [25, 10, 5, 1]
t = int(input())

for _ in range(t):
    c = int(input())
    r = []

    for i in changes:
        r.append(c // i)
        c = c % i
    
    print(*r)