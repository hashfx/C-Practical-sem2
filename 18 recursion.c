// Write a program to find factorial of a no using recursion

#include<stdio.h>
int factorial(int num){
    if (num < 0)
        return 0;
    else if (num == 0)
        return 1;
    else if (num > 1)
        return (num * factorial(num - 1));
    else
        return 1;
}

int main(){
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    int result = factorial(num);
    printf("Factorial: %d", result);
    return 0;
}

