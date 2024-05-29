// Writing FizzBuzz without any header files!

void print(const char* string, unsigned int length);
unsigned int my_strlen(const char* string);

int main(void) {
    print("Hello World!\n", my_strlen("Hello World!\n"));
    return 0;
}

void print(const char* string, unsigned int length) {
    asm (
        "mov $1, %%rax\n"
        "mov $1, %%edi\n"
        "movq %[string], %%rsi\n"
        "mov %[length], %%edx\n"
        "syscall\n"
        :
        : [string] "r" (string), [length] "r" (length)
        : "%rax", "%edi", "%rsi", "%edx"
    );
}

unsigned int my_strlen(const char* string) {
    unsigned int counter = 0;
    for (int i = 0; string[i]; i++)
        counter += 1;
    
    return counter;
}
