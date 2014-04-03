#! /usr/bin/env python
sum=0

for x in xrange(1000):
    if not x%3 or not x%5:
        sum+=x
print sum
