#include<stdio.h>
#include<string.h>
int main(void){
    char arr[20];
    int i,length,flag=0;
    printf("Enter the string : ");
    scanf("%s",arr);
    length= strlen(arr);
    for(i=0;i<length;i++){
        if(arr[i] != arr[length-i-1]){
            flag=1;
            break;
        }
    }
    if(flag=0){
        printf("Entered string is palindrome");
    }else{
        printf("Entered string is not a palindrome");
    }
}