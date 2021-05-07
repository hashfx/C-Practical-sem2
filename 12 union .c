// Write a program to illustrate union

#include<stdio.h>

union developer{
    int id;
    char grade;
    float salary;
} d1;

int main(){
    d1.id = 101;
    printf("ID: %d", d1.id);
    d1.grade = 'S';
    printf("\nGrade: %c", d1.grade);
    d1.salary = 800.25f;
    printf("\nSalary: %f", d1.salary);
    return 0;
}

