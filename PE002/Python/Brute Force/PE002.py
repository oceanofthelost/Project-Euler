old_fib=0
new_fib=1
sum=0

for i in xrange(34):
    if not new_fib % 2:
        sum+=new_fib
    new_fib, old_fib = old_fib + new_fib, new_fib
print sum
