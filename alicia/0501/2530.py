def oven():
    h, m, s = map(int, input().split())
    t = int(input())
    s = s + t
    m = m + (s // 60)
    s = s % 60
    h = h + (m // 60)
    m = m % 60
    h = h % 24
    return print(h, m, s)

oven()