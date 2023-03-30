score_m = int(input())
score_e = int(input())
average = (score_m + score_e) * 1/2
if average >= 90:
    print('A')
elif average >= 80:
    print('B')
elif average >= 70:
    print('C')
elif average >= 60:
    print('D')
else:
    print('F')