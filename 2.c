#include<stdio.h>
#include<conio.h>
int main(){
    int a;
    printf("enter any number");
    scanf("%d",&a);
    if (a%97==0){
        printf("divisible");
    }else
    {
        printf("not divisible");
    }

    return 0;
    getch();
}
