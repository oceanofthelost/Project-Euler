.global main

.data
test: .int 0
returned: .int 0
max: .int 0
maxreturned: .int 0

.text
oldebp = 0
retaddr = oldebp+4


main:
    pushl %ebp
    movl %esp,%ebp
    
    movl $1,%eax
    movl %eax,test

while_start:
    
    pushl test
    call Collatz
    movl %eax,returned

    movl returned,%eax
    movl maxreturned,%ebx
    cmpl %ebx,%eax
    jz if_end
    js if_end
    movl %eax,maxreturned
    movl test,%eax
    movl %eax,max
    
if_end:
    addl $1,test
    cmpl $1000000,test
    jnz while_start

stop:

end:
    pushl max
    call print
    addl $4,%esp

    movl $10,%eax
    pushl %eax

    movl $4,%eax
    movl $1,%ebx
    movl %esp,%ecx
    movl $1,%edx
    int $0x80

    addl $4,%esp

    movl %ebp,%esp
    popl %ebp
    ret 
    
    







    
