# obv naive approach is to check every num, but this is O(n)
# instead do a lil rearranging

def multiplesUpto(n, M): 
    return M//n #get number of multiples of n upto M 
def sumN(n): 
    return (n+1) * (n/2) # sum of natural nums upto n

#don't double count
print(3 * sumN(multiplesUpto(3,1000)) + 5 * sumN(multiplesUpto(5, 1000)) - 15 * sumN(multiplesUpto(15, 1000)))

# 234168