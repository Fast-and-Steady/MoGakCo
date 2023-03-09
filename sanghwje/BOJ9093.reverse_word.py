T = int(input())
stack = []
for i in range(T):
    s = input()
    for j in s:
        if j == ' ' or j == '\n':
            print(*stack[::-1], end = '', sep = '')
            stack.clear()
            print(" ", end ='')
        else:
            stack.append(j)
    print(*stack[::-1], sep ='')
    stack.clear()
    
