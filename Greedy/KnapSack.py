# There is a thief 
# use karna hai chori 
# ghusa dukan mein 
# uske paas hai bora jiska capacity hai W 
# gaya dukaan mein aur uska pata chala ki kaunsa item kitna weight mein hai aur utne pure weight ka us item ka daam kitna hai 
# weight and value 

def knapSack(W:int , weight: list[int] ,  value:list[int])->int:
    # Fractional Knapsack problem 
    # Aisa tareeka jisse hamara profit maximum ho 
    perKgValue = []
    for i in range(0 , len(weight)):
        # for(int i=0 ; i < len(weight) , i++)
        perKgValue.append(value[i]/weight[i])
        #[4.0, 6.0, 6.0, 2.0, 7.0]
    # maxValue - i W - weight[i] Profit + value[i]
    # if weight[i] > W: W kg 



    
    
knapSack(15 , [5 , 4 , 3 , 2 , 7] , [20 , 24 , 18 , 4 , 49])
