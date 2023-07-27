section .data
    hello db "Hello, Holberton", 10, 0   ; Include newline (10) in the data
    format db "%s", 0                  ; Format specifier for printf

section .text
    extern printf

global main
main:
    ; Prepare arguments to call printf
    push rdi               ; Save the value of rdi before using it as an argument
    lea rdi, [format]      ; Set rdi to point to the format string
    mov rsi, hello         ; Set rsi to point to the hello string
    xor rax, rax           ; Clear rax to indicate no vector registers used
    call printf            ; Call printf
    pop rdi                ; Restore the original value of rdi

    ; Exit the program
    xor eax, eax           ; Set eax to 0 (return code)
    ret                    ; Return from the main function
