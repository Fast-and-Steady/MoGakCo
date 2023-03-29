import sys

# 12605
n = int(input())

for i in range(n):
    sstr = list(map(str,sys.stdin.readline().split()))
    print('Case #'+ str(i+1) +': ', end = '')
    for i in range(len(sstr)):
        print(sstr.pop(), end = ' ')
    print()
