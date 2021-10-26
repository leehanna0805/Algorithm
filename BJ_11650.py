n = int(input())
array=[]
for _ in range(n):
    nums=list(map(int,input().split()))
    array.append((nums[0],nums[1]))
array = sorted(array)
for i in array:
    print(i[0],i[1])