#! /usr/bin/env python

result=1

for x in xrange(7830457):
    result=result*2%10000000000

result=result*28433%10000000000+1

print result
