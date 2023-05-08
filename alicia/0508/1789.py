'''binary search'''

s = int(input())
N = 0
res = 0
for i in range(1, s + 1):
    res += i
    N += 1
    if(res > s):
        N -= 1
        break
print(N)