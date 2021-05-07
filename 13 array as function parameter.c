// Write a program to pass entire array to a function

#include<stdio.h>

 int sum(int arr[]){
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += arr[i];
     }
 return sum;
}

 int main(){
     int result, arr[] = {10, 20, 30, 40, 50};
     result = sum(arr);
     printf("Sum = %d", result);
     return 0;
 }

