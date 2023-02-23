a = list(map(int,input().split()))
b = sorted(a)
c = sorted(a, reverse = True)
if a == b:
    print("ascending")
elif a == c:
    print("descending")
else:
    print("mixed")
#map -> list로 바꾸어준다.
#정렬알고리즘 역정렬-> reverse = True
