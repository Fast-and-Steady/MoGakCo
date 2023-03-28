import sys
n = int(sys.stdin.readline())

def f(string):
    for j in string:
        if j == '(':
            stack.append(j)
        else:
            if not stack:
                return "NO"
            else:
                stack.pop()
    if not stack:
        return "YES"
    else:
        return "NO"

stack = []
for i in range(n):
    string = sys.stdin.readline()
    string = string.strip('\n')
    print(f(string))
    stack.clear()