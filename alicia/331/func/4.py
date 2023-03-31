def power(x, y):
    result = 1
    for i in range(y):
        result = result * x
    return result

print(power(100,2))