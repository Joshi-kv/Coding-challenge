#include<stdio.h>
#include<stdlib.h>
int main(void){
    int i,n,mult=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        mult=i*n;
        printf("%d x %d = %d \n",i,n,mult);
    }
}