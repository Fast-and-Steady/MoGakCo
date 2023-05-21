def compare():
    s = input()
    c = "codeforces"
    ans = 0
    for i in range(10):
        if s[i] != c[i]:
            ans += 1
    print(ans)

t = int(input())
for i in range(t):
    compare()
