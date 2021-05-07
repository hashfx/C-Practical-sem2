// Write a program to illustrate call by value

#include<stdio.h>

// call by value
void swap_val(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("After swapping values in function a = %d, b = %d\n", a, b);
}


int main(){
    int a = 10;
    int b = 20;

    // Call by value
    printf("*-*-*-*-*-Call by value-*-*-*-*-*\n");
    printf("Before swapping: a = %d, b = %d\n", a, b);
    swap_val(a, b);

    return 0;
}

