#include<stdio.h>
#include<stdlib.h>
int main(void){
    int i,j,limit,arr[100][100];
    printf("Enter the limit : ");
    scanf("%d",&limit);
    printf("Enter the values : ");
    for(i=0;i<limit;i++){
        for(j=0;j<limit;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Entered values are : \n");
    for(i=0;i<limit;i++){
    for(j=0;j<limit;j++){
        printf("%d  ",arr[i][j]);
    }
    printf("\n");
 }
}