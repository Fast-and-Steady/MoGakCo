n = int(input())
poll = []

for i in range(n):
    poll.append(int(input()))
if max(set(poll), key = poll.count) == 0:
    print('Junhee is not cute!')
elif max(set(poll), key = poll.count) == 1:
    print('Junhee is cute!')