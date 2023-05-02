from copy import deepcopy
# def countConstruct (target:str , wordBank:list , memo = {})->bool:
#     if target in memo:
#         return memo[target]
#     if target == '':
#         return 1 
    
#     ways  = 0
#     print(str(target) + " initial ways:" + str(ways))
#     for s in wordBank:
#         if target.find(s) == 0 :
#             suffix = target[len(s):]
#             print(str(suffix) + " ways:" + str(ways))
#             ways+=countConstruct (suffix , wordBank , memo)

#     print(memo)
#     print("********************")
#     memo[target] = ways
#     return ways

def countConstruct(target , wordBank):
    # the function has to return the number of ways this problem can be constructed 
    ways = [0 for _ in range(len(target)+1)]
    ways[0] = 1 # trivial solution 
    for i in range(len(target)):
        if ways[i]:
            for word in wordBank:
                combination = target[i:i+len(word)]
                print(combination)
                if combination == word:
                    ways[i+len(word)]+=ways[i]
    return ways[len(target)]

# def canConstruct(target:str , wordBank:list , memo = {})->bool:
#     if target in memo:
#         return memo[target]
#     if target == '':
#         return True 
    
#     for s in wordBank:
#         if target.find(s) == 0 :
#             rem = target[len(s):]
#             if canConstruct(rem , wordBank , memo):
#                 memo[rem] = True 
#                 memo[target] = True 
#                 return True 
#             else:
#                 memo[rem] = False

#     memo[target] = False
#     return False

# tabulation 
# def canConstruct(target , wordBank):
#     size = len(target)
#     table = [False for i in range(size+1)]
#     table[0] = True # trivial case 
#     for i in range(size):
#         if table[i]:
#             for word in wordBank:
#                 if target[i:i+len(word)] == word:
#                     table[i+len(word)] = True 
#     return table[len(target)]    



# def allConstruct(target:str , wordBank:list , memo = {}) -> list:

#     if target in memo: 
#         return memo[target]
#     if target == '':
#         return [[]]
    
#     ret = [] 
#     for word in wordBank:
#         if target.find(word) == 0 :
#             suffix = target[len(word):]
#             matrix = allConstruct(suffix , wordBank)
#             if(matrix is not None):
#                 matrix = deepcopy(matrix)
#                 for i in range(len(matrix)):
#                     matrix[i].append(word)

#                 if ret is None :
#                     ret = matrix
#                 else:
#                     ret = ret + matrix
#     memo[target] = ret 
#     return ret

def allConstruct(target:str , wordBank:list[str])->list[str]: 
    table = [None for _ in range(len(target)+1)]
    table[0] = [[]]
    for i in range(len(target)):
        if table[i] is not None: 
            constructions = table[i]
            for word in wordBank:
                subConstructions = deepcopy(constructions)
                if target[i:len(word)+i] == word:
                    for a in subConstructions:
                        a.append(word)
                    if table[i+len(word)]:
                        table[i+len(word)]+=(subConstructions)
                    else:
                        table[i+len(word)] = subConstructions
    return table[len(target)]

                
        
    

        



print(allConstruct("purple" , ["p" , "purp" , 'ur' , 'le' , "purpl"]))
print(allConstruct("Mudit" , ["M" , "ud" , 't' , 'k' , 'ra' , 'b' , 'i']))


# print(canConstruct("Muditkrai" , ["M" , "udi" , 'ud' , 'Mudit' , "krai" , 't' , 'k' , 'ra' , 'b' , 'i']))
# print(canConstruct("eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee" , ["eeeeee" , "eeeee" , 'ee']))