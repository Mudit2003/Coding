def countingSort(arr , n):
    minimum = min(arr)
    maximum = max(arr)
    
    area = maximum - minimum + 1
    count = [0]*area
    for i in range(0,n):
        count[arr[i]]+=1
    x = len(count)
    for i in range(1,x):
        count[i]+=count[i-1]
    print(count)
    B = [0]*n
    for j in range(n-1 , -1 , - 1):
        print(count[arr[j]])
        B[count[arr[j]]-1] = arr[j]
        count[arr[j]]-=1
    return B    
    # i = n-1 ; j = maximum
    # while(i>=0 and j>=minimum):
    #     while(count[j]>0):
    #         arr[i]=j
    #         count[j]-=1

    #         i-=1
    #     else:
    #         j-=1

arr = list(eval(input((int()))))
print(countingSort(arr , len(arr)))





        

