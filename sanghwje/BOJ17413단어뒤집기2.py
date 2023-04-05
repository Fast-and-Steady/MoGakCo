put_str = input()
stack_str = []
answer_str = []
i = 0
while i < len(put_str):
    if put_str[i] == " ":
        for a in range(len(stack_str)):
            answer_str.append(stack_str.pop())
        answer_str.append(" ")
        i += 1
        continue
    if put_str[i] == "<":
        for j in range(len(stack_str)):
            answer_str.append(stack_str.pop())
        while True:
            answer_str.append(put_str[i])
            i += 1
            if put_str[i] == ">":
                answer_str.append(put_str[i])
                break
    else:
        stack_str.append(put_str[i])
    i += 1
if stack_str:
    for h in range(len(stack_str)):
        answer_str.append(stack_str.pop())
print("".join(answer_str))
