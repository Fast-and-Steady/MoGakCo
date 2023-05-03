n = int(input())
c, nc = 0, 0
for i in range(n):
    poll = int(input())
    if poll == 1:
        c += 1
    elif poll == 0:
        nc += 1

if c >= nc:
    print('Junhee is cute!')
else:
    print('Junhee is not cute!')
