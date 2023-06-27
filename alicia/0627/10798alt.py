import sys
input = sys.stdin.readline

s = [list(input().rstrip()) for i in range(5)]
maxx = 0
for i in s:
    if len(i) > maxx:
        maxx = len(i)

for i in range(maxx):
    for j in range(5):
        try:
            print(s[j][i], end = '')
        except:
            pass