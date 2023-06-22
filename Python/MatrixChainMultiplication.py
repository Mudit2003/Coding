def matrixMultiply(A, ma , na , B , mb , nb):
    if na != mb:
        print("Not Possible")
        return 0
    else:
        C = [[0 for i in range(nb)]for i in range(na)]
        for i in range(ma):
            for j in range(nb):
                for k in range(na):
                    C[i][j] += A[i][k]*B[k][j]
    return C

def matrixChainMultiplication(A , n):
    
    
