int ex6(long a, long b) {
    long c;
    if (a > b) {
        c = a;
    } else {
        c = b;
    }
    if (a > 0) {
        c = -c;
    }
    return c;
}


/*Dump of assembler code for function ex6:
   0x0000000000000000 <+0>:     cmp    %rsi,%rdi
   0x0000000000000003 <+3>:     jle    0x8 <ex6+8>
   0x0000000000000005 <+5>:     mov    %rdi,%rsi
   0x0000000000000008 <+8>:     test   %rdi,%rdi
   0x000000000000000b <+11>:    jle    0x10 <ex6+16>
   0x000000000000000d <+13>:    neg    %rsi
   0x0000000000000010 <+16>:    mov    %esi,%eax
   0x0000000000000012 <+18>:    ret    
End of assembler dump.*/