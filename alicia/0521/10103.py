n = int(input())

val_a = 100
val_b = 100
for _ in range(n):
    a, b = map(int, input().split())
    if a > b:
        val_b -= a
    elif a < b:
        val_a -= b

print(val_a)
print(val_b)