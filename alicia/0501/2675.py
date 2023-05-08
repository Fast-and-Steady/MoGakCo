t = int(input())

for _ in range(t): 
    # When you are not interested in some values returned by a function we use underscore in place of variable name . Basically it means you are not interested in how many times the loop is run till now just that it should run some specific number of times overall.
    n, s = input().split()
    o = ''
    for i in s:
        o += int(n) * i
    print(o)