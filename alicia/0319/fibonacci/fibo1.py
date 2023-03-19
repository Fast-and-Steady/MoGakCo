n = int(input())

memo = {}

def fibonacci(n):
    if n < 2:
        return n
    
    if n in memo:
        return memo[n]
    
    memo[n] = (fibonacci(n - 1) + fibonacci(n - 2)) % 1000000007

    return memo[n]

print(fibonacci(n))