import sys

gradelist=['A+', 'A0', 'B+', 'B0', 'C+', 'C0', 'D+', 'D0','F']
gradescorelist=[4.5, 4.0, 3.5, 3.0, 2.5, 2.0, 1.5, 1.0, 0.0]

sum = 0
total = 0

for i in range(20):
    _, num, grade = sys.stdin.readline().split()

    if grade == 'P':
        continue

    num = float(num)
    sum += num

    idx = gradelist.index(grade)
    total += num*gradescorelist[idx]

print('%.6f'%(total/sum))