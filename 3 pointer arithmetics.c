// Write a program to illustrate arithmetic operations on Pointer
#include <stdio.h>
int main(){
    int i, j;
    int* p1;
    int* p2;
    p1 = &i;
    printf("Address of p1: %d\n",p1);
    p2 = &j;
    printf("Address of p2: %u\n",p2);
    int m = p1 + 1;
    printf("p1 + 1: %d\n",m);
    int n = p1++;
    printf("p1++ : %d\n",n);
    int p = p2 - 1;
    printf("p2 - 1 : %d\n",p);
    int q = p2 - p1;
    printf("p2 - p1 : %d\n",q);
    return 0;
}
