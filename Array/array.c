#include<stdio.h>
#include<stdlib.h>
int main(void){
    int i,limit,arr[100];
    printf("Enter the limit : ");
    scanf("%d",&limit);
    printf("Enter the values : ");
    for(i=0;i<limit;i++){
        scanf("%d",&arr[i]);
    } 
    printf("Entered values are : ");
    for(i=0;i<limit;i++){
        printf("%d  ",arr[i]);
    }
}