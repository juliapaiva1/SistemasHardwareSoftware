void ex5(int a, int b, int *div, int *rem) {
    *div = a/b;
    *rem = a%b;
}

int main() {
    int d, r;
    ex5(10, 3, &d, &r);
    return d;
}



/*Dump of assembler code for function ex5:
   0x0000000000001149 <+0>:     endbr64 
   0x000000000000114d <+4>:     mov    %edi,%eax
   0x000000000000114f <+6>:     mov    %rdx,%r8
   0x0000000000001152 <+9>:     cltd   
   0x0000000000001153 <+10>:    idiv   %esi
   0x0000000000001155 <+12>:    mov    %eax,(%r8)
   0x0000000000001158 <+15>:    mov    %edx,(%rcx)
   0x000000000000115a <+17>:    ret    
End of assembler dump.


Dump of assembler code for function main:
   0x000000000000115b <+0>:     endbr64 
   0x000000000000115f <+4>:     push   %rbx
   0x0000000000001160 <+5>:     sub    $0x10,%rsp
   0x0000000000001164 <+9>:     mov    $0x28,%ebx
   0x0000000000001169 <+14>:    mov    %fs:(%rbx),%rax
   0x000000000000116d <+18>:    mov    %rax,0x8(%rsp)
   0x0000000000001172 <+23>:    xor    %eax,%eax
   0x0000000000001174 <+25>:    lea    0x4(%rsp),%rcx
   0x0000000000001179 <+30>:    mov    %rsp,%rdx
   0x000000000000117c <+33>:    mov    $0x3,%esi
   0x0000000000001181 <+38>:    mov    $0xa,%edi
   0x0000000000001186 <+43>:    call   0x1149 <ex5>
   0x000000000000118b <+48>:    mov    (%rsp),%eax
   0x000000000000118e <+51>:    mov    0x8(%rsp),%rsi
   0x0000000000001193 <+56>:    xor    %fs:(%rbx),%rsi
   0x0000000000001197 <+60>:    jne    0x119f <main+68>
   0x0000000000001199 <+62>:    add    $0x10,%rsp
   0x000000000000119d <+66>:    pop    %rbx
   0x000000000000119e <+67>:    ret    
   0x000000000000119f <+68>:    call   0x1050 <__stack_chk_fail@plt>
End of assembler dump.*/