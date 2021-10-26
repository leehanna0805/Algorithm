import copy

def calculate(n,array):
    if(len(array)==n):
        operators.append(copy.deepcopy(array))
        return

    array.append(' ')
    calculate(n, array)
    array.pop()

    array.append('+')
    calculate(n, array)
    array.pop()

    array.append('-')
    calculate(n, array)
    array.pop()

test=int(input())
for _ in range(test):
    n = int(input())
    number=[i for i in range(1,n+1)]
    operators=[]

    calculate(n-1,[])

    for operator in operators:
        string=""
        for i in range(n-1):
            string += str(number[i])+operator[i]
        string+=str(number[-1])

        if eval(string.replace(" ",""))==0:
            print(string)
    print()