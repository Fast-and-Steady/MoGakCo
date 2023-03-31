def add(a, b):
    return a+b
def swap(a, b):
    a, b = b, a
    return a, b

a = int(input("input an integer: "))
b = int(input("input an integer: "))
sum = add(a, b)
average = sum / 2
print("the sum is: ", sum)
print("the average is :", average)
a, b = swap(a, b)
print("change position of two integers: ", a, b)