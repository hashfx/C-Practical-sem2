// Write a program to illustrate malloc() function

#include<stdio.h>
#include <stdlib.h>

int main(){
    int* ptr;
    int n, i;
    printf("Enter size:");
    scanf("%d", &n);

    ptr = (int *) malloc(n * sizeof(int));
    if (ptr == NULL){
        printf("Space not available");
        exit(1);
    }

    printf("Enter all values:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
    }

    printf("Values you entered are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", ptr[i]);
    }
    return 0;
}

