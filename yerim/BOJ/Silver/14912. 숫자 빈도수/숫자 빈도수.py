
import sys

n, d = map(int, sys.stdin.readline().split())

lst = []
nums  = []
for i in range(1, n+1):
  lst = list(str(i))
  nums.append(lst)
  
cnt = 0
for i in range(1, n+1):
  if str(d) in nums[i-1]:
    for j in nums[i-1]:
      if str(d) == j:
        cnt += 1
    
print(cnt)