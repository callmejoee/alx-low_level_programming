section .data
    msg db "Hello, Holberton", 10
    len equ $-msg

section .text
    global _start

_start:
    ; write the message to stdout
    mov eax, 4          ; system call for write()
    mov ebx, 1          ; file descriptor for stdout
    mov ecx, msg        ; pointer to the message to print
    mov edx, len        ; length of the message to print
    int 0x80            ; call the kernel

    ; exit the program with status 0
    mov eax, 1          ; system call for exit()
    xor ebx, ebx        ; exit status
    int 0x80            ; call the kernel
