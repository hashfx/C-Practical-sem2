// Write a program to illustrate Pointer2Pointer
#include <stdio.h>
int main(){
    int var;
    int* ptr;
    int** pptr;  // pointer to pointer
    var = 5000;  // initialised variable
    ptr = &var;  // address of var
    pptr = &ptr;  // address of pointer

    printf("Address of *ptr: %u\n", ptr);
    printf("Address of **pptr: %u\n", pptr);
    printf("Value of Var: %d\n", var);
    printf("Value of *ptr: %d\n", *ptr);
    printf("Value of **pptr: %d\n", **pptr);
    return 0;
}
