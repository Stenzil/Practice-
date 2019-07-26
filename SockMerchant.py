#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the sockMerchant function below.
def sockMerchant(n, ar):
    k=0
    for i in range(n):
        for j in range(i+1,n,1):
            if i!=j and ar[i]==ar[j] and ar[i]!='S':
                ar[i]='S'
                ar[j]='S'
                k=k+1
    return k

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    ar = list(map(int, input().rstrip().split()))

    result = sockMerchant(n, ar)

    fptr.write(str(result) + '\n')

    fptr.close()
