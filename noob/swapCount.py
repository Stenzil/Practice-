#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the countSwaps function below.
def countSwaps(a):
    swap=0
    for i in range(len(a)):
        for j in range(i+1,len(a),1):
            if (a[i]>a[j]):
                t=a[j]
                a[j]=a[i]
                a[i]=t
                swap=swap+1
    print("Array is sorted in",swap,"swaps.")
    print("First Element:",a[0])
    print("Last Element:",a[-1])

    #print(swap)
if __name__ == '__main__':
    n = int(input())

    a = list(map(int, input().rstrip().split()))

    countSwaps(a)
