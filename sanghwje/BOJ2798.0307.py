from itertools import combinations, permutations
N, M = map(int,input().split())
num = list(map(int,input().split()))
combi = list(combinations(num, 3))
new_combi = []
for i in range(len(combi)):
    if sum(combi[i]) <= M:
        new_combi.append(sum(combi[i]))
print(max(new_combi))

