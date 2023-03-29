n = int(input())
lst = []
for i in range(1, n+1):
    lst.append(i)

result = []
for i in range(n-1):
    result.append(lst.pop(0))
    tmp = lst.pop(0)
    lst.append(tmp)

for i in result:
    print(i, end = ' ')

print(lst[0], end = '')