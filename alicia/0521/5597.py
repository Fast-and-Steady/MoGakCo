student = list(range(31))

student.remove(0)
for i in range(28):
    submit = int(input())
    student.remove(submit)

for i in student: print(i)