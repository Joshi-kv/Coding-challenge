#include<stdio.h>
#include<stdlib.h>
int main(void){
    int i,n,sum=0;
    printf("Enter a limit : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("Sum is : %d",sum);
}