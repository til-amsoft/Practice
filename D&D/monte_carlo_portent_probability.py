#Calculating the likelihood of 2 portents or better via monte carlo methods

import random as rn

#a and b are the portent rolls, runs is the number of scenarios to generate

def main(a,b,runs):
    x1 = max(a,b)
    y1 = min(a,b)
    total = 0
    for i in range(1,runs+1):
        x = rn.randint(1,20)
        y = rn.randint(1,20)
        x2 = max(x,y)
        y2 = min(x,y)
        if x2 >= x1 and y2 >= y1:
            total = total + 1
        if i%(runs/10) == 0:
            print("after ",i," runs probability = ", total/i)

main(19,13,10000000)
#returns probability of day being at least this lucky,
#with the highest portent at least as high as it is,
#and the second highest at least as high as it is
            
    
    
