from typing import List

def totalTimeAccepted(self, n : int, arr : List[int], time : List[int]) -> int:
    hm={}
    hm[arr[0]]=0
    cache=[0]*(n)
    for i in range(1,n):
        if arr[i] in hm:
            currentTime=cache[i-1]+1
            previousTime=cache[hm[arr[i]]]
            waitedTime=currentTime-previousTime
            if waitedTime<time[arr[i]-1]:
                currentTime+=time[arr[i]-1]-waitedTime
            cache[i]=currentTime
            hm[arr[i]]=i
        else:
            hm[arr[i]]=i
            cache[i]=cache[i-1]+1
    return cache[n-1]

def totalTime(self, n : int, arr : List[int], time : List[int]) -> int:
        hashMap = {}
        cache = [0]*n
        hashMap[0] = 0 
        for i in range(1,n):
            currTime = cache[i-1]+1
            if arr[i] in hashMap:
                prevTime = cache[hashMap[arr[i]]]
                waitedTime = currTime - prevTime 
                if(waitedTime < time[arr[i] - 1]):
                    currTime += time[arr[i] - 1] - waitedTime 
            cache[i] = currTime 
            hashMap[arr[i]] = i
        return cache[n-1]      

if __name__ == "__main__":
    arr = map(int(),input("arr:").split())
    
    time = map(int() , input("time").split())
    n = len(arr)
    print(str(totalTime(n , arr , time)) + " " + str(totalTimeAccepted(n , arr ,time)) )
