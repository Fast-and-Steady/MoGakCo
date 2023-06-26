numerics = '0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ'

n, b = map(int, input().split())
res = ' '

while n:
    res = numerics[n % b] + res
    n //= b

print(res)
