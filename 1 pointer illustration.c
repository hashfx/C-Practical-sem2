// write a program to illustrate pointer
#include <stdio.h>
int main(){
    int a = 10;
    int* ptr;
    ptr = &a;
    printf("%u %u \n", &a, ptr);
    printf("%d %d", a, *ptr);
    return 0;
}