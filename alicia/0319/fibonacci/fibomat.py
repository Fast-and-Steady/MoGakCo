n = int(input())


def multiply_matrices(a, b):
    
    return [[(a[i][j]*b[j][k]) % 1000000007 for k in range(2)] for i in range(2)]

def matrix_power(a, n):
    if n == 1:
         return a
    t
    if n % 2 == 0:
        b = matrix_power(a, n//2)
        return multiply_matrices(b, b)
   
    else:
        b = matrix_power(a, n-1)
        return multiply_matrices(a, b)

def fibonacci(n):
    if n < 2:
        return n
    
    a = [[1, 1], [1, 0]]
    a_n = matrix_power(a, n - 1)

    return a_n[0][0]


print(fibonacci(n) % 1000000007)