N, M = input().split()
N,M = int(N),int(M)
cards = list(map(int, input().split()))
result = []

for i in range(N-2):
    for j in range(i+1, N-1):
        for k in range(j+1, N):
            temp=cards[i]+cards[j]+cards[k]
            if(temp<=M):
                result.append(temp)
print(max(result))
