N = int(input())
alpha = input()
num = []
for i in range(N):
    num.append(int(input()))
stack = []
for i in alpha:
    if i >= "A" and i <= "Z":
        stack.append(num[ord(i)- 65])
    else:
        b = stack.pop()
        a = stack.pop()
        if i == "+":
            stack.append(a+b)
        elif i == "-":
            stack.append(a-b)
        elif i == "*":
            stack.append(a*b)
        else:
            stack.append(a/b)
print("%0.2f"%stack.pop())
            
