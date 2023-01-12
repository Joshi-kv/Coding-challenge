#include<stdio.h>
#include<stdlib.h>
int main(void){
    int i,j,limit,arr[100],temp;
    printf("Enter the limit : ");
    scanf("%d",&limit);
    printf("Enter the values : ");
    for(i=0;i<limit;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<limit-1;i++){
        for(j=i+1;j<limit;j++){
            if(arr[j]>arr[i]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("Sorted values are :");
    for(i=0;i<limit;i++){
        printf("%d  ",arr[i]);
    }
}