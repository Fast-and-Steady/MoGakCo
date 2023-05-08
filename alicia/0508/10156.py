k, n, m = map(int, input().split())

if k * n == m:
    print('0')
else:
    if k * n > m:
        print(abs(m - (k * n)))
    elif k * n < m:
        print('0')
    else:
        print('error!')