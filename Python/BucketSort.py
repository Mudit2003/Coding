import math


def bucketSort(arr:list , n:int):
    bucket = [[] for i in range(n)]
    for i in arr:
        x = math.floor(i*n)
        print(x)
        bucket[x].append(0.0)
        y = len(bucket[x])-1
        print(y)
        while y>0 and bucket[x][y-1]>i:
            bucket[x][y] = bucket[x][y-1] 
            y-=1
        bucket[x][y] = i
    x = 0 
    for i in range(0,len(bucket)):
        for j in range(0,len(bucket[i])):
            arr[x] = bucket[i][j]
            x+=1

arr = [0.91 , 0.28 , 0.76 , 0.83 , 0.11 , 0.32 , 0.69 , 0.23 , 0.51 , 0.26]
bucketSort(arr = arr , n = len(arr))
print(arr)