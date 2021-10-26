N = int(input())
num, bird, cnt = 0, 0, 0

while (bird != N):
    num += 1
    bird += num
    cnt += 1

    if (bird > N):
        bird -= num
        cnt -= 1
        num = 0

print(cnt)