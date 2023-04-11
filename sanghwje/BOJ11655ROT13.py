ROT13_str = input()
trans_str = []
for i in ROT13_str:
    if i.isupper():
        if ord(i) + 13 > 90:
            b = ord(i) + 13
            trans_str.append(chr(64 + (b - 90)))
        else:
            trans_str.append(chr(ord(i) + 13))
    elif i.islower():
        if ord(i) + 13 > 122:
            a = ord(i) + 13 
            trans_str.append(chr(96+(a - 122)))
        else:
            trans_str.append(chr(ord(i) + 13))
    else:
        trans_str.append(i)
print("".join(trans_str))
