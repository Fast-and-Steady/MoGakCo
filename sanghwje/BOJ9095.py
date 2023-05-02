T = int(input())
for i in range(T):
    n = int(input())
    d = [0 for j in range(n+1)]
    def plus(n):
        if d[n] != 0:
            return d[n]
        elif n == 1:
            d[n] = 1
            return d[n]
        elif n == 2:
            d[n] = 2
            return d[n]
        elif n == 3:
            d[n] = 4
            return d[n]
        elif n ==4:
            d[n] = 7
            return d[n]
        else:
            d[n] = plus(n-1)+plus(n-2)+plus(n-3)
            return d[n]
    plus(n)
    print(d[n])

