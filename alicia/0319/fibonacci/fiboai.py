def multiply_matrices(a, b, m):
    c = [[0, 0], [0, 0]]
    for i in range(2):
        for j in range(2):
            for k in range(2):
                c[i][j] += a[i][k] * b[k][j]
                c[i][j] %= m
    return c

def power_matrix(a, n, m):
    if n == 1:
        return a
    if n % 2 == 0:
        b = power_matrix(a, n//2, m)
        return multiply_matrices(b, b, m)
    else:
        b = power_matrix(a, n-1, m)
        return multiply_matrices(a, b, m)

def fibonacci(n):
    if n == 0:
        return 0
    a = [[1, 1], [1, 0]]
    a_n = power_matrix(a, n, 10000000007)
   
