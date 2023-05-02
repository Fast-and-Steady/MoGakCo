import sys
input = sys.stdin.readline

c, nc = 0, 0
for _ in range(int(input())):
    if int(input()) == 0:
        nc += 1
    else:
        c += 1
if nc > c:
    print('Junhee is not cute!')
else:
    print('Junhee is cute!')