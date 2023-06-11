A = []
sum = 0
for i in range(9):
    A.append(int(input()))
    sum += A[i]
fake_A = A.copy()
cnt = 0
for i in range(8):
    j = i+1
    while j < 9:
        if sum - (A[i]+A[j]) == 100:
            fake_A.pop(i)
            fake_A.pop(j-1)
            cnt += 1
            break
        j += 1
    if cnt == 1:
        break

fake_A.sort()
for i in range(7):
    print(fake_A[i])

