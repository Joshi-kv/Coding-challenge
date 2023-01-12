#include<stdio.h>
#include<stdlib.h>
int main(void){
    int i,limit,arr[100],count=0;
    printf("Enter the limit : ");
    scanf("%d",&limit);
    printf("Enter the values : ");
    for(i=0;i<limit;i++){
        scanf("%d",&arr[i]);
    }
    printf("Number of even number is : ");
    for(i=0;i<limit;i++){
        if(arr[i] % 2==0){
            count++;   
        }
    }
     printf("%d",count);
}