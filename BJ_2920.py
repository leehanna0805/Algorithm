a = input()
a = a.split()
a = list(map(int, a))

asc = [1,2,3,4,5,6,7,8]
des = [8,7,6,5,4,3,2,1]

if(a == asc):
    print("ascending")
elif(a == des):
    print("descending")
else:
    print("mixed")