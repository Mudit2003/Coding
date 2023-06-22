#from where we start and where we end 
#we start at a particular stop 
#let us say it is zero 

A = 0 ; B = 1000 
d=A 
G = [0 ,200 , 375 , 550 , 600 , 750 , 900 , 975 ]
n = len(G) 
numRefills = 0 
t=0
while t<n :
    lastRefill = G[t]
    while(t<n and lastRefill-G[t+1]<=400):
        t+=1 
        d+=G[t]
    if(G[t]==lastRefill):
        print("Impossibe")
        break
    if(t<n):
        numRefills+=1


    
    