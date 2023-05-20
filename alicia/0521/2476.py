n = int(input())
array = []

for _ in range(n):
    a, b, c = map(int, input().split())
    if a == b == c:
        array.append(10000 + a * 1000)
    elif a == b:
        array.append(1000 + a * 100)
    elif a == c:
        array.append(1000 + a * 100)
    elif b == c:
        array.append(1000 + b * 100)
    else:
        array.append(max(a, b, c) * 100)
    
print(max(array))