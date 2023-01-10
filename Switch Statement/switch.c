#include<stdio.h>
#include<stdlib.h>
int main(void){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    switch (num)
    {
    case 1:
        printf("Monaday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;       
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunaday");
        break;
    default:
    printf("Invalid !!");
        break;
    }
}