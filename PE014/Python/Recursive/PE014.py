from datetime import datetime
#variables that i will use
passed=0 #for the Collatz function
chain=0  #the max chain that we have found so far
chain_number=0 #the number that resulted in the max chain
current_chain=0 #used to get the current chain our number
number=0 #a loop variable
#function that i will use

def Collatz(passed):
    if passed==1:
        return 1
    elif passed%2==0:
        return 1+Collatz(passed/2)
    elif passed%2==1:
        return 1+Collatz(passed*3+1)


startTime = datetime.now()

for number in xrange(1,1000000):
    current_chain=Collatz(number)
    if current_chain > chain:
        chain=current_chain
        chain_number=number
print chain_number, " " , chain

print(datetime.now()-startTime)
