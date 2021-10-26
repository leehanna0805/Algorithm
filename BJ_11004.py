def merge_sort(array):
    if(len(array) < 2):
        return array

    mid = len(array)//2
    left = merge_sort(array[:mid])
    right = merge_sort(array[mid:])

    i,j = 0,0
    result = list()

    while( i<len(left) and j<len(right) ):
        if(left[i] <= right[j]):
            result.append(left[i])
            i+=1
        else:
            result.append(right[j])
            j+=1

    if i==len(left):
        while(j < len(right)):
            result.append(right[j])
            j+=1
    elif j == len(right):
        while(i<len(left)):
            result.append(left[i])
            i+=1
    return result

N, K = map(int,input().split())
array = list(map(int, input().split()))

array = merge_sort(array)
print(array[K-1])