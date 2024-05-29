// Writing fizz buzz without any header files!

int main(void) {
    char msg[] = "Hello World!\n";
    int len = 13;

    asm (
        "mov $1, %%rax\n"       // syscall number for write
        "mov $1, %%edi\n"       // file descriptor for stdout
        "movq %[msg], %%rsi\n"  // pointer to message
        "mov %[len], %%edx\n"   // length of message
        "syscall\n"             // invoke syscall
        :
        : [msg] "r" (msg), [len] "r" (len)
        : "%rax", "%edi", "%rsi", "%edx"
    );

    return 0;
}
