void ex3(int *a, int *b) {
    *a = (*b) * (*b);
}

//Dump of assembler code for function ex3:
//   0x0000000000000000 <+0>:     mov    (%rsi),%eax
//   0x0000000000000002 <+2>:     imul   %eax,%eax
//   0x0000000000000005 <+5>:     mov    %eax,(%rdi)
//   0x0000000000000007 <+7>:     ret    
//End of assembler dump.