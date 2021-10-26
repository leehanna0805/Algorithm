n = int(input())
array=[]
for _ in range(n):
    age, name = input().split()
    array.append((int(age),name))

array = sorted(array, key=lambda x:x[0])

for i in array:
    print(i[0],i[1])