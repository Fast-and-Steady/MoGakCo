n = int(input())
if n // 3 == 1:
    print("spring")
elif n // 3 == 2:
    print("summer")
elif n // 3 == 3:
    print("fall")
elif n == 12 or n == 1 or n == 2:
    print("winter")
elif n >= 13:
    print("what!")
elif n < 1:
    print("what!")
