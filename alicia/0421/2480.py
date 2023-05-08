a, b, c = input().split()
if (a == b) and (b == c):
    print(10000 + int(a) * 1000)
elif (a == b) and (b != c):
    print(1000 + int(a) * 100)
elif (a != b) and (b ==c):
    print(1000 + int(c) * 100)
elif (a == c) and (b != c):
    print(1000 + int(a) * 100)
elif (a != c ) and (b == c):
    print(1000 + int(b) * 100)
elif (a != b) and (b !=c) and (c != a):
    print(int(max(a, b, c)) * 100)