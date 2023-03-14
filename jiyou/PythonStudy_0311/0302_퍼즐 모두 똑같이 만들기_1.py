cap1 = ['F','F','B','B','B','F','B','B','B','F','F','B','F']
cap2 = ['F','F','B','B','B','F','B','B','B','F','F','F','F']

def pleaseConform(caps): # 함수의 이름과 입력변수를 나열합니다. def:함수정의/ 괄호안의문자:입력변수
    # 이 함수는 오로지 리스트만 입력변수로 받을 수 있을 것이고, cap1 또는 cap2 어느 것이나 함수의 입력값으로 넣어도 동작할 것입니다.
    start = forward = backward = 0 # 변수 정의, 초기화
    intervals = [] # 변수 정의, 초기화
    caps = caps + ['END'] # + 연산자는 두 개의 리스트를 합쳐서 새로운 리스트를 만들어내는 역할을 합니다.
    # 그래서 ['END'] 둘러서 + 연산을 한 것입니다. 왜냐하면 + 연산자는 두 개의 리스트, 문자열, 숫자에 대해서만 가능하고
    # 리스트와 문자열, 문자열과 숫자 사이에서는 불가능하기 때문입니다.
    # 새로운 원소를 추가함으로써 원래보다 한번 더 구간 찾기를 반복하고, 마지막에 caps[start]가 'F' 또는 'B' 어떤 것이어도 상관없이
    # caps[start] != caps[i]가 True가 되도록 유도해서, 별도의 작업없이 마지막 구간이 intervals 변수에 저장되도록 합니다.


    for i in range(1, len(caps)): # range(len(caps))변수 i는 0부터 시작해서 - 1까지 순서대로 증가. // == range(1, len(caps), 1)
        # 예를 들어 range(1, len(caps), 2)는 1부터 시작해서 2만큼씩 숫자가 커짐.
        
        if caps[start] != caps[i]: # 같지않을 경우, 두 값이 다를 경우. True일 경우 한개 구간 종료 후 현재의 i로 부터 새로운 구간 시작.
            intervals.append((start, i-1, caps[start])) # intervals 변수는 사람들의 구간을 표현하는 튜플의 리스트 이고,
            # 처음에는 빈리스트 []로 초기화되어 있습니다. // start로 시작해서 i-1로 끝납니다.
            # 3-튜플의 첫 번째 값은 시작 지점을, 두 번째 값은 끝 지점을, 세 번째 값은 구간의 모자 방향 'F'또는 'B'로 구성됩니다.
            if caps[start] == 'F':
                forward +=1 # forward, backward 변수는 앞으로 모자를 쓴 구간의 개수와 뒤로 모자를 쓴 구간의 개수를 저장하고, 
                # 모두 0으로 초기화 되어 있습니다.
            else:
                backward += 1
        # 방금 찾은 구간의 모자 방향에 맞춰 forward 혹은 backward 변수의 값을 늘립니다. 
            start = i
        # 13번째 줄은 새로운 구간을 시작하기위해 start 변수에 i 변수의 값을 할당합니다.

    # cap1을 입력값.  i = 12일 때 start = 11 이면서 'F'를 볼 수 있고 for문이 종료됩니다. ??
    # 비슷하게 cap2도 계산해보면 i = 12일 때 start = 9 이면서 'F'를 볼 수 있고, 마찬가지로 for문이 종료됩니다.

    intervals.append((start, len(caps)-1, caps[start])) 
    if caps[start] == 'F':
        forward += 1
    else:
        backword += 1
    if forward < backward:
        flip = 'F'
    else:
        flip = 'B'
    for t in intervals:
        if t[2] == flip:
            print('People in position', 't[0]', 
                  'through', t[1], 'flip your caps!')
            # 리스트보다 튜플을 사용하는 이유는 의도하지 않은 수정이 일어날 것을 방지해 줄 수 있기 때문입니다.

