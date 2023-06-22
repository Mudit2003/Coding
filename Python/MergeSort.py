
def merge(A,B) : 
    m = len(A)
    n = len(B)
    i = j = k = 0 
    C = []
    while (i<m and j<n):
        if A[i]< B[j]:
            C.append(A[i])
            # print("i:",i)
            i+=1 
        else :
            C.append(B[j])
            j+=1
        k+=1 
        # print("k:",k)

    while i<m:
        C.append(A[i])
        i+=1 ; k+=1 
    while j<n : 
        C.append(B[j])
        j+=1 ; k+=1
    return C 

def mergeSort(Array) : 
    n = len(Array)
    if(n<=1):
        return Array 
    mid = (n)//2
    Left = Array[0:mid]
    Right = Array[mid:n]
    Left = mergeSort(Left)
    Right = mergeSort(Right)
    Array = merge(Left , Right)
    return Array 

A = list(eval(input("Enter the list:")))
print(mergeSort(A))

        
        