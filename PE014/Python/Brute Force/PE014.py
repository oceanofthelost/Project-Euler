from datetime import datetime

#variables that i will use in this program
passed=0 #used in all of the functions
chain=0 #the max chain number
chain_number=0 #number that results in the max chain
current_chain=0 #the value of the current chain
number=0 #used as a loop variable

#functions for this program

def even(passed):
    passed/=2
    return passed

def odd(passed):
    passed*=3
    passed+=1
    return passed

def loop(passed):
    counter=1
    while passed!=1:
        if passed%2==0:
            counter+=1
            passed=even(passed)
        elif passed%2==1:
            counter+=1
            passed=odd(passed)
    return counter

startTime = datetime.now()

for number in xrange(1,1000000):
    current_chain=loop(number)
    if current_chain>chain:
        chain=current_chain
        chain_number=number

print chain, "  ", chain_number 
print(datetime.now()-startTime)
