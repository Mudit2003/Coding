from copy import deepcopy


def solveNQueensUtil(self , n: int , i: int , board: list):
            # signal = False 
        if i == n:
             return True 
        for j in range(n):
            if board[i][j] == "":
                boardA = deepcopy(board)
                boardA[i][j]=1
                for x in range(n):
                    boardA[i][x] = "."
                for x in range(n):
                    boardA[x][j] = "."
                u = i+1 ; v = j+1
                while v < n and u < n:
                    boardA[u][v] = "."
                A = self.solveNQueensUtil(n , i+1 , boardA)
                if A:
                    return True 
        return False 
        

             