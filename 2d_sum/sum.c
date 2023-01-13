#include<stdio.h>
#include<stdlib.h>
int main(void){
    int i,j,arr1[50][50],arr2[50][50],sum=0;
    printf("Enter the values of array1 : ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&arr1[i][j]);
        }
        
    }
    printf("Enter the values of array2 : ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("Sum of 2 arrays are : \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sum=arr1[i][j]+arr2[i][j];
            printf("%d  ",sum);
        }
        printf("\n");
    }
}