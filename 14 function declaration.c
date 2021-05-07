// write a program to illustrate function declaration

#include<stdio.h>
// declare sum function [{In: two numbers}, {Op: sum(two numbers)}]
int sum(int num1, int num2){
    return num1+num2;
}
int main(){
    int param = sum(50, 50);
    printf("Sum is: %d", param);
    return 0;
}

