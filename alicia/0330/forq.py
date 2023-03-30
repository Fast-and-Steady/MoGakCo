sum = 0

limit = int(input("where the addition ends?: "))
for i in range(1, limit+1):
    sum += i

print("from 1 to", limit, "=", sum)