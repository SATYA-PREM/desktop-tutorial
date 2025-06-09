#include<stdio.h>
#include<conio.h>
int main()
{
int age;

printf("Enter you age:");
scanf("%d", &age);
if(age>=18){
goto Vote;
}else{
goto NoVote;}
Vote:
    printf("you are eligible");
NoVote:
    printf("not eligible");
return 0;
getch();
}
