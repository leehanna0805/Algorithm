import sys

n = int(sys.stdin.readline())
#array=[0 for i in range(10001)]
array=[0]*10001
for _ in range(n):
    array[int(sys.stdin.readline())] +=1

for i in range(10001):
    for j in range(array[i]):
        print(i)