int fun4(long a, long b) {
    long c = 1;
    if (a > 0) {
        c = 2;
    }
    c *= b;
    return c;
}


/*Dump of assembler code for function fun4:
   0x0000000000000000 <+0>:     test   %rdi,%rdi
   0x0000000000000003 <+3>:     jle    0xf <fun4+15>
   0x0000000000000005 <+5>:     mov    $0x2,%eax
   0x000000000000000a <+10>:    imul   %rsi,%rax
   0x000000000000000e <+14>:    ret    
   0x000000000000000f <+15>:    mov    $0x1,%eax
   0x0000000000000014 <+20>:    jmp    0xa <fun4+10>
End of assembler dump.*/