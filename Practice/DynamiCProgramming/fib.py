# memoization and tabulation 

#memoization - memo is a reminder 
# memo = {0:0 , 1:1}
# def fib(n):
#     if(n in memo):
#         return memo[n]
#     else:
#         memo[n] = fib(n-1) + fib(n-2)
#         return memo[n]

def fib(n):
    if n<=1:
        return n 
    cache = [0 for _ in range(n+2)]
    cache[1] = 1
    for i in range(n):
        # cache[i] = cache[i-1] + cache[i-2]
        cache[i+1] += cache[i]
        cache[i+2] += cache[i]

    return cache[n]


    
print(fib(6))
print(fib(50))

# tabulation strategy 
# fib(6) - 8 
# we will solve this problem iteratively 
# find fib of 0 to 5 and thus we find fib(6)