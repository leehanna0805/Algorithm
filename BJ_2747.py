array=[0,1]

n = int(input())
if(n==0):
    print("0")
    exit()
elif(n==1):
    print("1")
    exit()

for i in range(2,n+1):
    array.append(array[i-2]+array[i-1])

print(array[-1])