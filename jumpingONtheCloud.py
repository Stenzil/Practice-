#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the jumpingOnClouds function below.
def jumpingOnClouds(c):
    jump=0
    i=0
    while(i<len(c)):
        print(i)
        print(jump)
        flag=False
        if i+2<len(c):
            if c[i]==c[i+2] and c[i+2]!=1:
                print("11111111111111111111")
                i=i+2
                jump=jump+1
                flag=True
            elif c[i]==c[i+1] and c[i+1]!=1:
                    i=i+1
                    jump=jump+1
        elif i+1<len(c) and flag!=True:
            print("222222222222222222222")
            if c[i]==c[i+1] and c[i+1]!=1:
                    i=i+1
                    jump=jump+1
            else:
                "not possible"
        else:
            #i=i+1
            break
    return jump
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    c = list(map(int, input().rstrip().split()))

    result = jumpingOnClouds(c)

    fptr.write(str(result) + '\n')

    fptr.close()
