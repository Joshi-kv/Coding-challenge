#include<stdio.h>
#include<stdlib.h>
void getArray(int);
void displayArray(int);
int main(void){
    int limit;
    printf("Enter the limit : ");
    scanf("%d",&limit);
    getArray(limit);
    displayArray(limit);
}

void getArray(int n){
    int i,arr[100];
    printf("Enter the values : ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}

void displayArray(int n){
    int i,arr[100];
    printf("Entered values are : ");
    for(i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
}
