#include<stdio.h>
#include<stdlib.h>
int main(void){
    int i,n;
    printf("Enter a limit : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2==0){
            printf("%d \n",i);
        }
    }
}