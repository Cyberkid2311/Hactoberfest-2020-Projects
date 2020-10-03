# -*- coding: utf-8 -*-
"""
Created on Thu Jul 23 16:27:45 2020

@author: KayDee
"""

def kadane(arr):
    local_max = global_max = arr[0]
    for i in range(1,len(arr)-1):
        local_max = max(arr[i],local_max + arr[i])
        if local_max > global_max:
            global_max = local_max
    return global_max


T = int(input())
while T:
    dump = input()
    a = list(map(int,input().split()))
    print(kadane(a))
    T-=1
    