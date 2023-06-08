    Ldp[i] = max(Ldp[i])
i = N-1
while i >= 0:
    k = i + 1
    while k <= N-1:
        if A[i] > A[k]:
            Rdp[i][k] += Rdp[k]
        k += 1
    Rdp[i] = max(Rdp[i])
    i -= 1

for i in range(N):
    if Ldp[i] == 1:
        Ldp[i] = 0
    if Rdp[i] == 1:
        Ldp[i] = 0
    Ldp[i] += Rdp[i]
    if Ldp[i] + Rdp[i] == 0:
        Ldp[i] = 1

print(max(Ldp) - 1)
 
