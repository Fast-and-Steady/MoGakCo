n, m = map(int, input().split())

array = [i for i in range(1, n + 1)]

for i in range(m):
    i, j = map(int, input().split())
    i -= 1; j -= 1
    array[i], array[j] = array[j], array[i]
    
print(*array)