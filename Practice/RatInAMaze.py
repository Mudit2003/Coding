def ratInAMaze(path : list[list] , m:int , n:int , a:int , b:int)->list[list]:
    # find all the paths the rat can reach the maze 
    # four movements allowed left , right , up , down 
    # m , n denote the destination and a , b denote the source 
  
    if (a>=0 and b>=0) and (a <= m and b <= n ) and path[a][b]:
        path[a][b] = 0 # marking the path as visited 
        if a==m and b==n: # reached the destination 
            return [(a , b)]
            print("Reached the destination")

        mat = []
        # left 
        L = ratInAMaze(path , m , n , a , b-1) 
        if L is not None:
            L.append((a,b))
        
        #right
        R = ratInAMaze(path , m , n , a , b+1)
        if R is not None:
            R.append((a,b))
        # down 
        D = ratInAMaze(path , m , n , a+1 , b)
        if D is not None:
            D.append((a,b))


        #up
        U = ratInAMaze(path , m , n , a-1 , b)
        if U is not None:
            U.append((a,b))

        min
        path[a][b]=1

        return mat
    else :
        return None

print(ratInAMaze([[1 , 1 , 1 , 1] , [0 , 0 , 1 , 1] , [1 , 0 , 1 , 1] , [1 , 0 , 0 , 1]] , 3 , 3 , 0  , 0))