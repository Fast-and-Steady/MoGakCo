capital = {'네팔' : '카트만두',
           '대한민국' : '서울',
           '일본' : '도쿄',
           '중국' : '베이징',
           '이탈리아' : '로마',
           '러시아' : '모스크바',
           '독일' : '베를린',
           '미국' : '워싱턴',
           '프랑스' : '파리',
           '영국' : '런던'};

while(True):
    contry = input(str(list(capital.keys())) + " 나라의 수도는 무엇일까요? ")
    if contry in capital:
        print(contry, '의 수도는', capital.get(contry), '입니다.')

    elif contry == "exit":
        break;
    else:
        print('그런 나라가 없습니다.')
