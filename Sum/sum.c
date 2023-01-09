#include<stdio.h>
#include<stdlib.h>
int main(void){
    int num1;
    float num2;
    float result;
    printf("Enter 2 numbers :\n ");
    scanf("%d%f",&num1,&num2);
    result=num1+num2;
    printf("Result is : %f",result);
}