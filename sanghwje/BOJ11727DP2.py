n = int(input())
d = [0 for i in range(1001)]
def tiling(n):
    if d[n] != 0:
        return d[n]
    elif n == 1:
        d[n] = 1
        return d[n]
    elif n == 2:
        d[n] = 3
        return d[n]
    else:
        d[n] = tiling(n-2) + tiling(n-2) + tiling(n-1)
        return d[n]
tiling(n)
print(d[n]%10007)

