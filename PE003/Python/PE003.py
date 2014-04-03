number=600851475143

while number!=1:
    for i in xrange(2,number+1):
        if number%i==0:
            number/=i
            print number
            break


