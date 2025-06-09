#include<stdio.h>
#include<conio.h>
int main(){

    float tax;
    printf("enter your anual income in lakh ");
    scanf("%f",&tax);
    if (tax>2.5&&tax<5){
        printf("tax interest 5\%");
    }
    if(tax>5&&tax<10){
        printf("tax interest 20\%");
    }
    if (tax>10){
        printf("tax interest 30\%");
    }else{
        printf("the number entered is less than 2.5 L");
    }

    return 0;
    getch();
}
