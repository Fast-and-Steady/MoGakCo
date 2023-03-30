'''치윤법 사용'''

year = int(input())

if ((year % 4 == 0) and (year % 100 != 0)) or (year % 400 == 0):
    print('leap year')

else:
    print('not a leap year')