def countingSort(arr , n , place):
    # at this point if we want 10th place then tenth place is 
    # formula = arr[i] / pow(10,i) % 10
    count = [0 for i in range(10)]
    for i in range(n):
        count[(arr[i]//pow(10,place))%10]+=1
    print("place:"+str(place)+" count:"+str(count))
    for i in range(1,len(count)):
        count[i] +=count[i-1]
    print("cumlative count"+str(count))
    # print(arr)
    B=[0]*n
    for j in range(n-1 , -1 , -1):
        exp =  (arr[j]//pow(10,place) )%10
        # print(str(exp)+" "+str(arr[j]) , end=" ")
        B[count[exp]-1] = arr[j]
        count[exp]-=1 
        # print(count[1])
    return B


def radixSort(arr , n):
    maximum = max(arr)
    x = maximum
    d = 0 
    while(x):
        x = x//10
        d+=1
    # guessing that the number of digits are from 0-9 
    # applying counting Sort
    # the idea may use a queue as it was given so the amount of steps to be used is going to be less 
    for i in range(0,d):
        arr = countingSort(arr , n , i)
    return arr

arr = [221 , 127 , 982 , 1001 , 257 , 69 , 20]
print(radixSort(arr , len(arr)))
print(arr)
        
