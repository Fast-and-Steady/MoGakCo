facto = 1
n = int(input())

i = 1
while True:
    facto *= i
    i += 1
    if i > n:
        break

print(facto)