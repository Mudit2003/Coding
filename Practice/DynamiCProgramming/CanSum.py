from copy import deepcopy
from random import randint
# def canSum(arr : list , target:int , memo = {}) -> bool:
#     if target in memo:
#         return memo[target]
#     if target == 0 :
#         return True
#     if target <0 or arr is None:
#         return False 
#     for i in arr:
#         memo[target-i] = canSum(arr , target-i , memo)
#         if(memo[target-i]):
#             return True 
#     memo[target] = False
#     return memo[target]

# this time we have to go back in order to tell how the solution was constructed 
# def howSum(arr: list , target : int , memo = {})-> list :
#     if target in memo:
#         return memo[target]
#     if(target==0):
#         return []
#     if(target<0):
#         return None
#     for value in arr:
#        ret = howSum(arr , target - value)
#        memo[target -value] = ret 
#        if ret is not None:
#         #    print(ret)
#            ret = ret + [value]
#            memo[target] = ret 
#            return ret 
#     memo[target] = None 
#     return memo[target]

#tabulation based 
# def canSum(numbers , targetSum):
#     # size = len(numbers)
#     cache = [False for _ in range(targetSum+1) ] # default value
#     cache[0] = True # trival value 
#     for i in range(targetSum):
#         for j in numbers:
#             if i+j <= targetSum:
#                 cache[i+j] = cache[i]
#     return cache[targetSum]

def howSumMy(numbers , targetSum):
    # this questions how did we reach that sum and thus this requires us to reconstruct the solution to this problem
    cache = [False for _ in range(targetSum+1)]
    cache[0] = True 
    for i in range(targetSum):
        if cache[i]:
            for j in numbers:
                if i+j<=targetSum:
                    cache[i+j] = True 
    
    ret = []
    if cache[targetSum]:
        value = targetSum
        while(value):
            for i in numbers:
                if value-i >=0 and cache[value - i]:
                    value -=i
                    ret.append(i)
    if(len(ret)):
        return ret
    else:
        return None

def howSum(numbers , targetSum):
    cache = [None for _ in range(targetSum+1)]
    cache[0] = []
    for i in range(targetSum):
        if cache[i] is not None:
            for value in numbers:
                if i + value <= targetSum:
                
                    cache[i+value] = cache[i] + [value]
    return cache[targetSum]

if __name__ == "__main__":
    # print(howSum([7 , 14] , 300 ))
    for i in range(100000):
        ls=[randint(1,10) for x in range(6)]
        targetSum = randint(10, 100)
        if howSum(ls , targetSum)!=None and sum(howSumMy(ls ,  targetSum)) != targetSum:
            print(str(howSumMy(ls ,  targetSum)))
            break
            
        