t = int(input())
for _ in range (t):
    uni = {}
    n = int(input())
    for _ in range(n):
        a, b = input().split()
        uni[a] = int(b)
    swap_uni = dict(zip(uni.values(), uni.keys()))
    print(swap_uni[max(swap_uni)])