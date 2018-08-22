#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Thu Aug 23 00:12:46 2018

@author: xor
"""
no=int(input())
list=[]
i=0
while i<no:
    name=input()
    list.append(name)
    i+=1
loop=0
while(loop<no):
    x=list[loop]
    x=x.split(" ")
    i=0
    p=x[-1]
    for l in x:
       #print(p)
       while i<len(x):
           x[i]=x[i][0].upper()
           if not i==len(x)-1:
               x[i]+='.'
           i=i+1
    i=0
    while (i<len(p)):
        if not i==len(p)-1:
            x[-1]+=p[i+1].lower()
            #print(x[-1])
            i+=1
        else:
            break
    xx=" ".join(str(xx) for xx in x)
    print(xx)
    loop+=1
