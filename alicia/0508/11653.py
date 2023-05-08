''''prime factorisation'''

N = int(input())
n = N
i = 2

while i <= N:
    if n % i == 0:
        print(i)
        n //= i
    else:
        i += 1