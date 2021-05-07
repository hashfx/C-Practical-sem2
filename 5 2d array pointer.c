// Write a program to display 2d array elements using Pointer notation

#include <stdio.h>
int main(){
    // initialise array
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10 ,11, 12};
    // declare [row][column] variables
    int i, j;
    // for loop to display elements
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("  %d  ", *(*(arr+i)+j));
        }
        printf("\n");
    }
    return 0;
}