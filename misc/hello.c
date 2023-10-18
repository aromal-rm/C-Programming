void customPrint(const char* str) {
    // Inline assembly using x64 calling convention
    __asm {
        ; Load the parameters for the syscall
        mov rdx, str          ; rdx contains the pointer to the string
        mov r8, 14            ; r8 contains the string length (excluding the null terminator)
        mov r9, 1             ; r9 contains the file descriptor (1 for stdout)

        ; Syscall number for sys_write (64-bit Windows syscall number)
        mov eax, 0x2          ; 0x2 for sys_write

        ; Syscall
        syscall
    }
}
