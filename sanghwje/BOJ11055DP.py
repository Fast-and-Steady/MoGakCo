A_len = int(input())
A = list(map(int, input().split()))
D = [[0 for i in range(A_len)] for j in range(A_len)]
for i in range(A_len):
    for j in range(A_len):
        D[i][j] = A[i]
for i in range(A_len):
    j = i - 1
    while j >= 0:
        if A[j] < A[i]:
            D[i][j] += D[j]
        j -= 1
    D[i] = max(D[i])
print(max(D))
