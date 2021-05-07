// Write a program to illustrate pointer to structure
#include<stdio.h>

struct Developer{
    int id;
    char name[20];
    float salary;
};

int main(){
    struct Developer d = {101, "Bill", 8000.0};
    struct Developer *ptr;
    ptr = &d;
    printf("\nID: %d", ptr -> id);
    printf("\nName: %s", ptr -> name);
    printf("\nSalary: %2.f", ptr -> salary);
    return 0;
}

