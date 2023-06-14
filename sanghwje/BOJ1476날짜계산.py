E = S = M = year = 1

answer = list(map(int, input().split()))

while 1:
    if E == answer[0] and S == answer[1] and M == answer[2]:
        break
    E += 1
    S += 1
    M += 1
    if E > 15:
        E = 1
    if S > 28:
        S = 1
    if M > 19:
        M = 1
    year += 1
print(year)
