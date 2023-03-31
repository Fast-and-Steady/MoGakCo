names = []
while True:
    name = input("input student's name: ")
    if name == "":
        break
    names.append(name)

print("names of students: ")and
for name in names:
    print(name, end = ", ")