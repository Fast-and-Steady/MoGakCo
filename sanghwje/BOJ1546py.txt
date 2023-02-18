N = int(input())
list1=[]
sum = 0
list1 = list(map(int, input().split()))
M = max(list1)
for i in range(0,N):
    list1[i] = list1[i] / M*100
for i in range(0,N):
    sum += list1[i]
print(sum / N)

"""
in this case, you can modify the values in list1
list1 = list(map(int, input().split()))
but not in this case,
list1 = map(int, input().split())
"""
