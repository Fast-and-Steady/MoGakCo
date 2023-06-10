num1, num2 = map(int, input().split())

garo = num1 // 4 +1
sero = num2 // 4 + 1
if num1 % 4 == 0:
    garo = num1 // 4
if num2 % 4 == 0:
    sero = num2 // 4

garo2 = num1 % 4
if num1 % 4 == 0:
    garo2 = 4

sero2 = num2 % 4
if num2 % 4 == 0:
    sero2 = 4


sero_len = abs(sero2 - garo2)
garo_len = abs(sero - garo)


print(garo_len + abs(sero_len))
