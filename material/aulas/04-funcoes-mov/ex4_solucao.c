#include <stdio.h>

int ex4(int a, int b) {
    return a * b + 32;
}

int main() {
    int d = ex4(5, 2);
    int d2 = ex4(2, 2);
    printf("%d\n", d+d2);
    return d;
}


//Dump of assembler code for function ex4:
//   0x0000000000001149 <+0>:     endbr64 
//   0x000000000000114d <+4>:     imul   %esi,%edi
//   0x0000000000001150 <+7>:     lea    0x20(%rdi),%eax
//   0x0000000000001153 <+10>:    ret    
//End of assembler dump.

//Dump of assembler code for function main:
//   0x0000000000001154 <+0>:     endbr64 
//   0x0000000000001158 <+4>:     push   %rbx
//   0x0000000000001159 <+5>:     mov    $0x2,%esi
//   0x000000000000115e <+10>:    mov    $0x5,%edi
//   0x0000000000001163 <+15>:    call   0x1149 <ex4>
//   0x0000000000001168 <+20>:    mov    %eax,%ebx
//   0x000000000000116a <+22>:    mov    $0x2,%esi
//   0x000000000000116f <+27>:    mov    $0x2,%edi
//   0x0000000000001174 <+32>:    call   0x1149 <ex4>
//   0x0000000000001179 <+37>:    lea    (%rbx,%rax,1),%edx
//   0x000000000000117c <+40>:    lea    0xe81(%rip),%rsi        # 0x2004
//   0x0000000000001183 <+47>:    mov    $0x1,%edi
//   0x0000000000001188 <+52>:    mov    $0x0,%eax
//   0x000000000000118d <+57>:    call   0x1050 <__printf_chk@plt>
//   0x0000000000001192 <+62>:    mov    %ebx,%eax
//   0x0000000000001194 <+64>:    pop    %rbx
//   0x0000000000001195 <+65>:    ret    
//End of assembler dump.