print(power(10, 2))

def power(x, y):
    result = 1
    for i in range (y):
        result = result * x
    return result

# sequence is important!: NameError: name 'power' is not defined