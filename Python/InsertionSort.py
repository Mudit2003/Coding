def insertionSort(A):
  
    for i in range(1,len(A)):
        key = A[i]
        j = i-1 
        while(A[j]>key and j>=0):
            A[j+1]=A[j]
            j = j-1 
        A[j+1]=key

X = [7,6,5,4,3,2,1,0]
insertionSort(X)
print(X)



    
