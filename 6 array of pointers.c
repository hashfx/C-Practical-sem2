// Write a program to illustrate array of pointers

#include<stdio.h>
int main(){
    int* arr[4];
    int i;
    int a = 10;
    int b = 20;
    int c = 30;
    arr[0] = &a;
    arr[1] = &b;
    arr[2] = &c;

    for (int i = 0; i < 3; i++) {
        printf("\n Number: %d", *arr[i]);
        printf("\t Address: %u", arr[i]);
    }
    return 0;
}
