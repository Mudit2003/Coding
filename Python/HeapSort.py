#HeapInsert 
#heap of size n needs a value being inserted into it 


def insertHeap(heap , n , val):
    heap.append(val)
    insertHeapify(heap , n) 

def insertHeapify(heap , index):
    if(index<=0):
        return
    par = (index-1)//2
    if index>par and heap[index] > heap[par]:
        heap[index],heap[par]=heap[par],heap[index]
        index = par
        insertHeapify(heap , index)

def deleteHeap(heap , n , index):
    n-=1
    heap[index], heap[n] = heap[n], heap[index]
    deleteHeapify(heap , n , index)
    return heap[n]

def deleteHeapify(heap , n , root ):
    left = 2*root + 1
    right =2*root + 2 
    max = root
    if(left<n and heap[left]>heap[max]):
        max = left 
    if(right<n and heap[right]>heap[max]):
        max = right 
    if(max!=root):
        heap[max], heap[root] = heap[root], heap[max]
        deleteHeapify(heap , n , max)

def heapSort(arr):
    n=0
    heap = []
    for x in arr:
        insertHeap(heap , n , x )
        n+=1 
    print(heap)
    while n>0 :
        print(deleteHeap(heap , n , 0))
        n-=1 
    return heap

arr = [78 , 24 , 53 , 105 , 9 , 62 ]
arr = heapSort(arr)
print(arr)
        









    







