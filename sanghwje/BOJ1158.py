from collections import deque
data_answer = []
data_queue = deque()
count = 0
data = list(map(int, input().split()))
for i in range(data[0]):
    data_queue.append(i+1)
while(data_queue):
    count += 1
    if count % data[1] == 0:
        data_answer.append(data_queue.popleft())
    else:
        data_queue.append(data_queue.popleft())

print("<"+', '.join(map(str, data_answer))+">")
