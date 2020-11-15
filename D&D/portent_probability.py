#Calculating the likelihood of 2 portents or better via monte carlo methods

import random as rn

#a and b are the portent rolls, runs is the number of scenarios to generate

def main(a,b):
    x1 = max(a,b)
    y1 = min(a,b)
    total = 0
    for i in range(1,21):
        for j in range (1,21):
            if max(i,j)>=x1 and min(i,j)>=y1:
                total = total + 1
    print("Out of 400 possibilities, ", total, " are this good or better, giving this a probability of ", total/400)

main(13,19)
    
    
