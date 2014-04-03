.global Collatz
.text

oldebp = 0
retaddr = oldebp + 4
passed = retaddr + 4

Collatz:
    pushl %ebp
    movl %esp,%ebp

    cmpl $1,passed(%ebp)
    jnz else_if_1
    movl $1,%eax
    jmp end

else_if_1:

    movl passed(%ebp),%eax
    movl $0,%edx
    movl $2,%ecx
    divl %ecx
    cmpl $0,%edx
    jnz else_if_2

        pushl %eax
        call Collatz
        addl $1,%eax
        addl $4,%esp
        jmp end

else_if_2:
    movl passed(%ebp),%eax
    movl $0,%edx
    movl $2,%ecx
    divl %ecx
    cmpl $1,%edx
    jnz end

        movl $0,%eax
        addl passed(%ebp),%eax
        addl passed(%ebp),%eax
        addl passed(%ebp),%eax
        addl $1,%eax
        pushl %eax
        call Collatz
        addl $1,%eax
        addl $4,%esp
        jmp end

end:
    movl %ebp,%esp
    popl %ebp
    ret
