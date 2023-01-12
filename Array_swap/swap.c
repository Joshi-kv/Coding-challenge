#include<stdio.h>
#include<stdlib.h>
int main(void){
    int i,limit,arr1[100],arr2[100],temp;
    printf("Enter the limit : ");
    scanf("%d",&limit);
    printf("Enter the values of array 1 : ");
    for(i=0;i<limit;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter the values of array 2 : ");
    for(i=0;i<limit;i++){
        scanf("%d",&arr2[i]);
    }
    printf("Arrays after swaping  \n");
    for(i=0;i<limit;i++){
        temp=arr1[i];
        arr1[i]=arr2[i];
        arr2[i]=temp;
    }
    printf("Array 1 : ");
    for(i=0;i<limit;i++){
        printf("%d  ",arr1[i]);
    }
        printf("\nArray 2 : ");
    for(i=0;i<limit;i++){
        printf("%d  ",arr2[i]);
    }
}