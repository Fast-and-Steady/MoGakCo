n = int(input())

scores_list = list(map(int, input().split()))
max_score = max(scores_list)

lista = []
for i in scores_list:
    lista.append(i/max_score * 100)
average = sum(lista)/n

print(average)