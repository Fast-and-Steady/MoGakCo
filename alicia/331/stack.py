#BOJ 12605
from sys import stdin

n = int(stdin.readline())

data = [""] * n
result = [""] * n

for i in range(0, n):
    data[i] = stdin.readline()

for i in range(0, n):
    temp = "Case #" + str(i+1) + ": "
    slist = data[i].split()
    for j in range (1, len(slist) + 1):
        temp += slist[-j]
        temp += " "
    result[i] = temp

for r in result :
    print(r)