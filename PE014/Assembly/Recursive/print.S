.global print
.text

oldebp = 0
passed = oldebp + 8

print:
    pushl %ebp
    movl %esp,%ebp
    
    cmpl $9,passed(%ebp)
    jna if_end
    
    movl passed(%ebp),%eax
    movl $0,%edx
    movl $10,%ecx
    divl %ecx
    pushl %eax
    call print
    addl $4,%esp
    
if_end:
    
    movl passed(%ebp),%eax
    movl $0,%edx
    movl $10,%ecx
    divl %ecx
    movl $'0',%ecx
    addb %dl,%cl
    pushl %ecx

here:
    movl $4,%eax
    movl $1,%ebx
    movl %esp,%ecx
    movl $1,%edx
    int $0x80
    addl $4,%esp

    
    
end:
    movl %ebp,%esp
    popl %ebp
    ret
