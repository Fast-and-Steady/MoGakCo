n, x = map(int, input().split())
sequence = list(map(int, input().split()))

for i in range(n):
    if sequence[i] >= x:
       sequence.pop[i]

print(sequence[i], end = " ")

'''https://www.freecodecamp.org/news/typeerror-builtin-function-or-method-object-is-not-subscriptable-python-error-solved/'''