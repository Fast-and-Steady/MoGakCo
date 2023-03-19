n = int(input())

cache = {0: 0, 1: 1}

def fibonacci_of(n):
    if n in cache:
        return cache[n]
    cache[n] = fibonacci_of(n - 1) + fibonacci_of(n -2)
    return cache[n]

print(fibonacci_of(n))