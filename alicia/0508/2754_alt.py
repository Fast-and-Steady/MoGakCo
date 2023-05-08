str = input()
res = 0.0

if str == 'F':
    str = 'F0'
    
elif str[0] == 'A':
    res += 4.0
elif str[0] == 'B':
    res += 3.0
elif str[0] == 'C':
    res += 2.0
elif str[0] == 'D':
    res += 1.0


if str[1] == '+':
    res += 0.3
elif str[1] == '-':
    res -= 0.3
elif str[1] == '0':
    res -= 0.0

print(res)