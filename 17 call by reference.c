// Write a program to illustrate call by address

#include<stdio.h>
// call by reference
void swap_ref(int* a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("After swapping values in function a = %d, b = %d\n", *a, *b);
}

int main(){
    int a = 10;
    int b = 20;
    // call by reference
    printf("*-*-*-*-*-Call by Reference-*-*-*-*-*\n");
    printf("Before swapping: a = %d, b = %d\n", a, b);
    swap_ref(&a, &b);

    return 0;
}
