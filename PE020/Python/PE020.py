from datetime import datetime
#variables that i will be using
sum=0
number=1

startTime=datetime.now()
a=100
while a!=1:
    number*=a
    a-=1

#this finds the sum of the digits
while number!=0:
    sum+=number%10
    number/=10
print(datetime.now()-startTime)
print sum
