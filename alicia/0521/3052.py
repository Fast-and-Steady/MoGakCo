s = []

for _ in range(10):
    a = int(input())
    b = a % 42
    s.append(b)

set = set(s)
print(len(set))