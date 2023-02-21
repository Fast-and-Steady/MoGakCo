int_grade = 0
sum_alpha = 0
a = []
alpha = ['F','D0','D+','C0','C+','B0','B+','A0','A+']
int_alpha = [0.0, 1.0, 1.5, 2.0, 2.5, 3.0, 3.5, 4.0, 4.5]
for i in range(20):
    a = list(input().split())
    if a[2] != 'P':
        int_grade += float(a[1])* int_alpha[alpha.index(a[2])]
        sum_alpha += float(a[1])
print(int_grade / sum_alpha)
# 인덱스 처리와 리스트로 입력받기.
