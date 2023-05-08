n = int(input())

for i in range(n):
    s = list(map(str, input().split()))
    res = eval(s[0])
    for j in range(len(s)):
        if s[j] == '@':
            res = res * 3
        elif s[j] == '%':
            res = res + 5
        elif s[j] == '#':
            res = res - 7
    print('%0.2f' % res)