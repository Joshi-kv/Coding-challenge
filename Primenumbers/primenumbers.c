#include<stdio.h>
#include<stdlib.h>
int main(void){
    int i,n,flag=0;
    printf("Enter a limit : ");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++){
        if(i%n==0){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("Prime number");
    }else{
        printf("Not a prime number");
    }
}