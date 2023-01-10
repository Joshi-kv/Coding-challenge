#include<stdio.h>
#include<stdlib.h>
int main(void){
    float mark;
    printf("Enter your mark : ");
    scanf("%f",&mark);
    if(mark>=90){
        printf("A grade");
    }else if(mark<90){
        printf("B grade");
    }else if(mark<80){
        printf("C grade");
    }else if (mark<70){
        printf("D grade");
    }else if (mark<60){
        printf("E grade");
    }else{
        printf("Failed");
    }
}