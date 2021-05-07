// Write a program to illustrate actual and formal parameter in a function
#include<stdio.h>

int foo(int a){
    a += 1;
    a++;
    printf("\na = %d\n\n", a);
}

int main(){
    int x = 10;
    printf("Before function call: x= %d\n", x);

    printf("After function call: x= %d\n", foo(x));

    return 0;
}

