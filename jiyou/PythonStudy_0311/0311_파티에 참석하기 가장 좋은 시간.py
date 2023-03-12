sched = [(6, 8), (6, 12), (6, 7), (7, 8),
         (7, 10), (8, 9), (8, 10), (9, 12),
         (9, 10), (10, 11), (10, 12), (11, 12)]
# 2-튜플로 표현됩니다. 각각 시작시간, 끝시간 의미.구간에 대한 정보 수정할 일 없기 때문에 튜플을 사용.

def bestTimeToParty(schedule):
    start = schedule[0][0]
    end = schedule[0][1]
    for C in schedle:
        start = min(c[0], start)
        end = max(c[1], end)
    count = celebrityDensity(schedule, start, end)
    maxcount = 0
    for i in range(start, end + 1):
        if count[i] >maxcount:
            maxcount = count[i]
            time = i 
        print ('Best time to attend the party is at', time, 'o\'clcck', ':', maxcount,
               'celebrities will be attending!')