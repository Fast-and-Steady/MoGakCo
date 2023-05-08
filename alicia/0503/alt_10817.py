t = input().split()

if t[0] >= t[1]:
    if t[0] >= t[2]:
        if t[1] >= t[2]:
            print(t[1])
        else:
            print(t[2])
    else:
        print(t[0])
else:
    if t[1] >= t[2]:
        if t[0] >= t[2]:
            print(t[0])
        else:
            print(t[2])
    else:
        print(t[1])