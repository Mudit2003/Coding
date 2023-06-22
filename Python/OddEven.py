# def oddEven(A,Odd,Even):
#     for i in A : 
#         if (i%2==0):
#             Even.append(i)
#         else:
#             Odd.append(i)

Odd =list()
Even = list() #even=[]
X = [1,2,3,4,5,6,7,8,9]
for i in X: 
        if (i%2==0):
            Even.append(i)
        else:
            Odd.append(i)

print(Odd)
print(Even)

# class MyClass:
#     a = 6 
#     b = 2 
#     c = 4 

#     print(a+b+c)