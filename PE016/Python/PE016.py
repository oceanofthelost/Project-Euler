#the variables that i will be using
number=2**1000
sum=0

#finding the sum
while number!=0:
    sum+=number%10
    number/=10

print sum
