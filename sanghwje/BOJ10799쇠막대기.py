count = 0
bar_count = 0
bar = list(input())
for i in range(len(bar)):
    if bar[i] ==")":
        if bar[i - 1] == "(":
            count -= 1
            bar_count -= 1
            bar_count = count + bar_count
        else:
            count -= 1
    else:
        bar_count += 1
        count += 1
print(bar_count)
