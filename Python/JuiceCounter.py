# -*- coding: utf-8 -*-
"""
Created on Sat Oct 17 12:41:57 2020

@author: adity
"""

T = int(input())
for i in range(T):
    x,y,z,n = map(int,input().split())
    mango = 0
    apple = 0 
    Mix_fruit = 0
    mango = n-x
    apple = n-z
    Mix_fruit = n-y
    total = mango*40 + apple*30 + Mix_fruit*20
    print("{} {} {} {}".format(Mix_fruit,apple,mango,total))