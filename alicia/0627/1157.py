words = input().upper()
words_filtered = list(set(words))

count_list = []

for i in words_filtered:
    count = words.count(i)
    count_list.append(count)

if count_list.count(max(count_list)) > 1:
    print('?')
else:
    max_index = count_list.index(max(count_list))
    print(words_filtered[max_index])