n = int(input())

for i in range(n):
    left = []
    right = []
    str = input()
    for k in range(len(str)):

        if(str[k]=='<'):
            if(len(left)!=0):
                right.append(left.pop())

        elif(str[k]=='>'):
            if (len(right) != 0):
                left.append(right.pop())

        elif(str[k]=='-'):
            if (len(left) != 0):
                left.pop()

        else:
            left.append(str[k])

    left.extend(reversed(right))
    print(''.join(left))