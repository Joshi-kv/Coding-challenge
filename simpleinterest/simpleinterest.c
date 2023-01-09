#include<stdio.h>
#include<stdlib.h>
int main(void){
    int p;
    float r,n,SI;
    printf("Enter principle amount : \n");
    scanf("%d",&p);
    printf(" Enter rate of interest :\n");
    scanf("%f",&r);
    printf(" Enter no.of years :\n");
    scanf("%f",&n);
    SI=(p*r*n)/100;
    printf("Simple interest is : %f",SI);
}