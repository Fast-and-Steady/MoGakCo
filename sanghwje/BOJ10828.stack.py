import sys
N = int(input())
stack = []
for i in range(N):
    s = sys.stdin.readline().split() # input() 대신.
    cmd = s[0]
    if cmd == 'push':
        num = int(s[1])
        stack.append(num)
    if cmd == 'pop':
        if stack:
            #stack.pop() - 없어도 된다고?
            print(stack.pop()) # pop메서드. 
        else:
            print('-1')
    if cmd == 'size':
        print(len(stack))
    if cmd == 'empty':
        if stack:
            print(0)
        else:
            print(1)
    if cmd == 'top':
        if stack:
            print(stack[-1]) #[-1] 마지막 인덱스
        else:
            print(-1)
    # c언어랑 차이가 있음. 
    # c언어는 인덱스를 보존.

