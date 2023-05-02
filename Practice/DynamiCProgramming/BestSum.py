# def bestSum(targetSum:int , numbers: list  ,memo = {} )-> list:
#     if targetSum in memo:
#         return memo[targetSum]
#     if targetSum == 0 : 
#         return [] 
#     if targetSum < 0 : 
#         return None 
    
#     smallestCombination = None
#     print(targetSum)
#     for value in numbers:
#         remainder = targetSum - value 
#         combination = bestSum(remainder ,  numbers , memo)
#         print(str(remainder) + ":" + str(combination))
#         if combination is not None:
#             combination = combination.copy()
#             combination.append(value)
#             if smallestCombination is None or len(smallestCombination) > len(combination):
#                 smallestCombination = combination
    
#     memo[targetSum] = smallestCombination
#     print(smallestCombination)
#     print('********')
#     print(memo)
#     print("*****************")
#     return smallestCombination


#tabulation 
def bestSum(targetSum:int , numbers:list[int])->list[int]:
     table = [None for i in range(targetSum+1)]
     table[0] = []
     for i in range(targetSum):
          if table[i] is not None:
               for value in numbers:
                    combination = table[i].copy()
                    combination.append(value)
                    if i+value<=targetSum and (table[i+value] is None or len(combination) < len(table[i+value])):
                         table[i+value] = combination
     return table[targetSum]

                   
                          



     
     




if __name__ == "__main__":
     print(bestSum(7 , [2 , 5 , 3 , 4 , 7]))
    #  print("next")
     print(bestSum(8 , [2 , 5 , 3 ]))
     print("output:"+str(bestSum(10, [1 , 2 ,3 , 15])))
     print("output:"+str(bestSum(100, [1 , 75 ,3 , 25])))
