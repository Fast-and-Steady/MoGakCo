import sys

n, m, q = map(int, sys.stdin.readline().split())

arr = []
for i in range(n):
  arr.append(list(map(int, sys.stdin.readline().split())))

query=[]
for i in range(q):
  query.append(list(map(int, sys.stdin.readline().split())))
  

for i in range(q):
  if query[i][0] == 1:
    a = query[i][1]
    b = query[i][2]
    tmp = []
    tmp.append(arr[b])
    arr[b] = arr[a]
    arr[a] = tmp[0]
      
  elif query[i][0] == 0:
    a = query[i][1]
    b = query[i][2]
    arr[a][b] = query[i][3]

for i in range(n):
  for j in range(m):
    print(arr[i][j], end = ' ')
  print()
  