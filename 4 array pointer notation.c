// Write a program to print array elements using Pointer notation

#include <stdio.h>
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int i;
    for (int i = 0; i < 5; ++i) {
        printf("Number: %d", *(arr + i));
        printf("\tAddress: %u", arr+i);
        printf("\n");
    }
    return 0;
}

