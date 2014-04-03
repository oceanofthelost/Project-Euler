#! /usr/bin/env python

def Fibonacci( passed ):
    if passed==0:
        return 0
    elif passed==1:
        return 1
    else: 
        return Fibonacci(passed-1)+Fibonacci(passed-2)


returned=0
sum=0

for i in xrange (34):
    returned=Fibonacci(i)
    if returned%2:
        sum+=returned

print sum
