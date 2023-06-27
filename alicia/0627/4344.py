c = int(input())
arr = []

for i in range(c):
    total = 0
    average = 0
    count = 0
    n_score = list(map(int, input().split()))
    total = sum(n_score) - n_score[0]
    average = total / (len(n_score) - 1)
    for j in range (1, len(n_score)):
        if n_score[j] > average:
            count += 1
    arr.append((count / (len(n_score) - 1)) * 100)

for k in range(c):
    print(f'{arr[k]:.3f}%')