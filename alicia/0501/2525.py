h, m = map(int, input().split())
ct = int(input())

h += ct // 60
m += ct % 60

if m >= 60:
    h +=1
    m -= 60
if h >= 24:
    h -= 24
print(h, m)