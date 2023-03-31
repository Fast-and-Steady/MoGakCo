def swap(c, d):
    c, d = d, c
    return c, d

a = 90
b = 80
a, b = swap(a, b)
print(a, b)