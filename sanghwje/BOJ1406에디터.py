R_stack = []
L_stack = list(input())
num = int(input())
for i in range(num):
    command = input().split()
    if command[0] == 'L' and L_stack:
        R_stack.append(L_stack.pop())
    elif command[0] == 'D' and R_stack:
        L_stack.append(R_stack.pop()) 
    elif command[0] == 'B' and L_stack:
        L_stack.pop()
    elif command[0] == 'P':
        L_stack.append(command[1])
    else:
        continue
L_stack = ''.join(L_stack)
R_stack = ''.join(R_stack)
all_stack=L_stack + R_stack
print(all_stack) 
#결과값 ycbax 
#올바른 값 txabc 
#미완성..

        
        

