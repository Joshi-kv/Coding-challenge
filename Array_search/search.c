#include<stdio.h>
#include<stdlib.h>
int main(void){
    int i,limit,arr[100],key,flag=0;
    printf("Enter the limit : ");
    scanf("%d",&limit);
    printf("Enter the values : ");
    for(i=0;i<limit;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the search key : ");
    scanf("%d",&key);
    for(i=0;i<limit;i++){
        if(key==arr[i]){
            printf("Entered value found at %d position",i+1);
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("Value not found");
    }
}