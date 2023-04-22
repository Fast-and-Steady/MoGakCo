h, m = input().split()
h = int(h)
m = int(m)
if (h == 0) and (m >= 45):
    print(h, m - 45)
elif (h == 0) and (m < 45):
    print(23, 60 + m - 45)
elif (h != 0) and (m >= 45):
    print(h, m - 45)
elif (h != 0) and (m < 45):
    print(h - 1, 60 + m - 45)