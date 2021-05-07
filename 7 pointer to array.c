// write a program to illustrate pointers to an array
#include<stdio.h>
int main(){
    int* arr[5];
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 5; i++) {
        printf("\nValue: %d", arr[i]);
        printf("\tAddress: %u\n", &arr[i]);
    }

    return 0;
}
