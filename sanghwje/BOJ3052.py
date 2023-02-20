list1 = []
for i in range(10):
    a = int(input())
    if a % 42 not in list1:
       list1.append(a % 42)
print(len(list1))

# you have to check (if ~ not in ~) and append func again
