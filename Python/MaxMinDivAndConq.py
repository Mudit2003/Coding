def findMax(arr , beg , end ):
    if(beg==end):
        return arr[beg]
    mid = beg + (end-beg)//2
    maximum = max(findMax(arr , beg , mid) , findMax(arr , mid+1 , end))
    return maximum

def findMin(arr , beg , end ):
    if(beg==end):
        return arr[beg]
    mid = beg + (end-beg)//2
    maximum = min(findMin(arr , beg , mid) , findMin(arr , mid+1 , end))
    return maximum

arr = [ 1 , 1 , 4 , 8 , 16 , 3 , 2 , 7 ]
print(findMax(arr , 0 , len(arr)-1))
print(findMin(arr , 0 , len(arr)-1))