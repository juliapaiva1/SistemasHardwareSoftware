long ex5(long a, long b) {
    if (a > 0 && b < 1) {
        return a+5;
    }
    return b-2;
}

/*Dump of assembler code for function ex5:
   0x0000000000000000 <+0>:     test   %rdi,%rdi
   0x0000000000000003 <+3>:     setg   %dl
   0x0000000000000006 <+6>:     test   %rsi,%rsi
   0x0000000000000009 <+9>:     setle  %al
   0x000000000000000c <+12>:    test   %al,%dl
   0x000000000000000e <+14>:    jne    0x15 <ex5+21>
   0x0000000000000010 <+16>:    lea    -0x2(%rsi),%rax
   0x0000000000000014 <+20>:    ret    
   0x0000000000000015 <+21>:    lea    0x5(%rdi),%rax
   0x0000000000000019 <+25>:    ret    
End of assembler dump.*/