import sys
input = sys.stdin.readline

def compare(a, left, right):
    while left < right:
        if a[left] != a[right]:
            return 0
        left += 1
        right -= 1
    return 1

s = input().rstrip()
n = len(s)

if not compare(s, 0, n - 1):
    print(n)
elif not compare(s, 0, n - 2):
    print(n - 1)
else:
    print(-1)