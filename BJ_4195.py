#어려워 아오ㅠ
def find(x):
    if x == parent[x]:
        return x
    else:
        p = find(parent[x])
        parent[x] = p
        return parent[x]


def union(x, y):
    x = find(x)
    y = find(y)
    if x != y:
        parent[y] = x
        number[x] += number[y]


test = int(input())
for i in range(test):
    parent = dict()
    number = dict()

    f = int(input())
    for j in range(f):
        x, y = input().split()
        if x not in parent:
            parent[x] = x
            number[x] = 1
        if y not in parent:
            parent[y] = y
            number[y] = 1
        union(x, y)
        print(number[find(x)])