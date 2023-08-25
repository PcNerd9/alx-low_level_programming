section .data
    hello db "Hello, Holberton", 10, 0

section .text
global main

extern printf

main:
    push rsi
    lea rdi, [hello]
    xor rax, rax
    call printf
    pop rsi

    ret

section .note.GNU-stack noalloc noexec nowrite progbits

