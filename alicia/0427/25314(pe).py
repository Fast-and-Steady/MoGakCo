def pe(n):
    answer = ['long'] * (n // 4)
    answer += ['int']

    return ' '.join(answer)

if __name__ == '__main__' :
    n = int(input())
    print(pe(n))