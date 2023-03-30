year = int(input())

if year % 4 == 0:
    print('leap year')
elif year % 100 == 0:
    print('not a leap year')
elif year % 400 == 0:
    print('leap year')
else:
    print('not a leap year')