t = int(input())
for _ in range(t):
    a, b = map(int, input().split())
    for i in range(1, min(a, b)+ 1):
        if a % i == 0 and b % i == 0:
            GCD = i
    LCM = a * b // GCD
    print(LCM)