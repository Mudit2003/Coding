def operation(operand1 , operand2 , operator ):
    if(operator == '+'):
        return operand1 + operand2
    elif(operator == '-'):
        return operand1 - operand2
    elif(operator == '*'):
        return operand1 * operand2
def parantheses(d , op):
    n = len(d)
    M=[[0]*n for _ in range(n)]
    m=[[0]*n for _ in range(n)]
    for i in range(0,n):
        M[i][i] = m[i][i] = d[i] 
        
        print(d[i])
    for s in range(1,n):
        # this loop goes in order of increasing s values 
        # this loop gets all the possible i values
        # 0 , 1 , 2, 3 , 4 , 5 
        # 0 , 1 , 2 , 3 , 4
        # 0 , 1 , 2 , 3
        # 0 , 1 , 2
        # 0 , 1 
        # 
        for i in range(0,n-s):  
            j = i+s
            #creating the min max function 
            # the operator k will be between values k and k+1
            # thus working our way forward we can do something great
            maxValue = -pow(2,32)
            minValue = pow(2,32)
            for k in range(i,j):
                a = operation(M[i][k],M[k+1][j],op[k])
                b = operation(M[i][k],m[k+1][j],op[k])
                c = operation(m[i][k],M[k+1][j],op[k])
                d = operation(m[i][k],m[k+1][j],op[k])
                maxValue = max(a , b , c , d , maxValue)
                minValue = min(a , b , c , d , minValue)
            M[i][j] = maxValue
            m[i][j] = minValue
    return M[0][n-1]

def placingParantheses(M , m , i ,  j , value ):
    
    for k in range(i,j):
            a = operation(M[i][k],M[k+1][j],op[k])
            if(value == a ):
                print("parantheses:"+str(i)+","+str(j))
            b = operation(M[i][k],m[k+1][j],op[k])
            if(value == b):
                print("paranthese:"+str(i)+","+str(j))
            c = operation(m[i][k],M[k+1][j],op[k])
            if(value == c):
            d = operation(m[i][k],m[k+1][j],op[k])
            if(value == d):
            





d = [5,8,7,4,8,9]

op = ['-' , '+' , '*' , '-' , '+']
print(parantheses(d , op))
