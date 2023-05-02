# memo = {(1,1):1}
# def gridTraveller( m: int , n: int , memo = {(1,1):1})->int:
#     # allowed moves - down and right 
#     if (m,n) in memo:
#         return memo[(m, n)]
#     if m == 0 or n==0 :
#         return 0
    
#     memo[(m , n)] = (gridTraveller( m-1 , n , memo) 
#         +  gridTraveller( m , n-1 , memo))
#     return memo[(m,n)]

#tabulation recipe 
#visualize the problem as a table 
# size the table based on the inputs 
#initialize the table with default values 
#seed the trivial answer into table m[1][1] = 1
#iterate through the table 
# fill further positions based on the current position

# now we go tabulation
def gridTraveller( m: int , n: int )->int:
    grid = [[0 for _ in range(n+1)] for _ in range(m+1) ]
    # moves present are to the right or to the bottom 
    # let us try to get a taste of the details that we know 
    # the base cases we know are all of those moves whome we already know 
    #     if m == 0 or n==0 :
    #         return 0
    #     if m==1 and n == 1
    #         return 1 
    # replicating this case
    grid[1][1] = 1
    for i in range(m):
        for j in range(n):
            grid[i+1][j]+=grid[i][j]
            grid[i][j+1]+=grid[i][j]
            # print(str(i)+" "+str(j))
    for i in range(m):
            # print(str(grid[i][n]))
            grid[i+1][n] += grid[i][n]
    
    for j in range(n):
            grid[m][j+1] += grid[m][j]
    print(grid)
    return grid[m][n]




print(gridTraveller(1 , 1))
print(gridTraveller(2 , 3))
print(gridTraveller(3 , 3))
print(gridTraveller(3 , 2))
print(gridTraveller(18 , 18))

