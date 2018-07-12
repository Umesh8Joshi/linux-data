#include <stdio.h>
int bss_var;
int data_var = 1;

int main(int argc, char **argv){
    void *stack_var;
    stack_var = (void *)main;
    printf("Main is executing at %p\n", stack_var);
    printf("The address is %p\n", &stack_var);
    printf("Address in bss section is %p\n", &bss_var);
    printf("Address in data section is %p\n", &data_var);
    return 0;
}
