// Write a program to illustrate return statement using functions

#include<stdio.h>

int sum(int x, int y){
    int z = x + y;
    return z;
}

int main(){
    int a, b, c;
    a = 15;
    b = 10;
    c = sum(a, b);
    printf("%d", c);
    return 0;
}

