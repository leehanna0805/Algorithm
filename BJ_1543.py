string = input()
word = input()
count = 0

idx = string.find(word)
length = len(word)

while(idx != -1):
    count += 1
    string = string[idx+length:]
    idx = string.find(word)

print(count)