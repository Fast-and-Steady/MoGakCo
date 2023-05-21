word = input()

is_pallindrome = True
for i in range(len(word) // 2):
    if word[i] != word[-1 - i]:
        is_pallindrome = False
        break

print(is_pallindrome)