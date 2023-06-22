from random import random


def partition(A , p , r ):
    rand = random.randint(p, r+1)
    A[rand], A[r] = A[r], A[rand]
    x = A[r]
    i = p -1
    for j in range(p , r):
        if(A[j]<=x):
            i+=1
            A[j], A[i] = A[i], A[j]
    A[i+1], A[r] = A[r], A[i+1]
    return i+1

def quickSort(A , p , r):
    if(p < r):
        pivot = partition(A , p , r)
        quickSort(A , p , pivot-1)
        quickSort(A , pivot+1 , r)

arr = list(eval(input(int())))
quickSort()
    
