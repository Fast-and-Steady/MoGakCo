for i in range (1, 100):
    print("execute for sentence for %d times" % i)
    break

sum, j = 0, 0
for j in range(1, 101):
    if j % 3 == 0:
        continue
    sum += j

print("sum of from 1 to 100 except multiples of 3: %d" % sum)