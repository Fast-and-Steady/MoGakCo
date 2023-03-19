count = 0
fibo = 7
dictionary = {
    1: 1
    2: 1
}

def fibo_memo(n):
    global count
    count += 1
    print(f'fibo_memo({n}) called, count: {count}')
    if n in dictionary:
        return dictionary[n]
    else:
        dictionary[n] = fibo_memo(n - 1) + fibo_memo(n - 2)
        print(dictionary)
        return dictionary[n]
    
    print('-' * 10 + f'\nfibo_memo({fibo}): {fibo_memo(fibo)}')