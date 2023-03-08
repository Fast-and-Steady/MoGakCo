N = int(input())
arr = [0 for i in range(N)]
for i in range(N):
    arr[i] = list(input().split())
new_arr = sorted(arr, key = lambda x : int(x[0]))
for i in range(N):
    print(new_arr[i][0], new_arr[i][1])
        

