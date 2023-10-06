void ex2(int a, int *b) {
    *b = a+10;
}

//Dump of assembler code for function ex2:
//   0x0000000000000000 <+0>:     add    $0xa,%edi
//   0x0000000000000003 <+3>:     mov    %edi,(%rsi)
//   0x0000000000000005 <+5>:     ret    
//End of assembler dump.