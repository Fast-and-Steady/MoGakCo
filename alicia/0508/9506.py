while 1:
    n = int(input())
    if n == -1:
        break
    array = []
    for i in range (1, n):
        if n % i == 0:
            array.append(i)
    if sum(array) == n:
        print(n, '=', ' + '.join(str(i) for i in array), sep=' ')
    else:
        print(n, 'is NOT perfect.')
        