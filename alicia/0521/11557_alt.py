tc = int(input())
uni, quant = [], []

import sys
for t in range(tc):
    num = int(sys.stdin.readline())
    for n in range(num):
        uni_quant = sys.stdin.readline().split()
        uni.append(uni_quant[0])
        quant.append(int(uni_quant[1]))
        max_quant = max(quant)
    for n in range(num):
        if quant[n] == max_quant:
            print(uni[n])
        else:
            continue