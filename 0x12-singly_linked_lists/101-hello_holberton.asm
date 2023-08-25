section .data
    hello db "Hello, Holberton", 10, 0

section .text
global main

extern printf

main:
    push rdi
    lea rdi, [hello]
    call printf
    pop rdi

    xor edi, edi
    mov eax, 60
    syscall

section .note.GNU-stack noalloc noexec nowrite progbits

