#it's about LIS, using DP
#find max length of increasing numbers
def swap(A,B):
    C = 0
    C = A
    A = B 
    B = C
AL = int(input())
A = list(map(int, input().split()))
D = [[1 for i in range(AL)] for k in range(AL)]
for i in range(AL):
    j = i - 1
    while j >= 0:
        if A[i] > A[j]:
            D[i][j] += D[j]
        j -= 1
    D[i] = max(D[i])
print(max(D))
    
