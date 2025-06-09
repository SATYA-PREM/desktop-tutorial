#include<stdio.h>
#include<ctype.h>
char stk[100];
void push(char);
char pop();
int priority(char);
int top=-1;
int main(){
    char exp[100],*e,c;
    printf("enter infix");
    scanf("\n%s",&exp);
    printf("the postfix is \n");
    e=exp;
    while(*e!='100'){
        if(isalnum(*e)){
            printf("%c",*e);
        }else if(*e=='('){
            push(*e);
        }else if(*e==')'){
            while((c=pop())!='('){
                printf("%c",c);
            }
        }else{
            while(top!=-1&&priority(stk[top]>=priority(*e))){
                printf("%c",pop());
            }
            push(*e);
        }e++;
    }while (top!=-1)
    {
        /* code */
        printf("%c",pop());
    }
    printf("/n");
    return 0;
}
void push(char x){
    if(top<99){
        stk[++top]=x;
    }else{
        printf("stk overflow");
    }
}
char pop(){
    if(top==-1){
        return '\0';
    }else{
        return (stk[--top]);
    }
}
int priority(char x){
    if(x=='('||x==')'||x=='='){
        return 0;
    }if (x=='+'||x=='-')
    {
        return 1;
    }if (x=='*'||x=='/')
    {
        return 2;
    }if (x=='^')
    {
        return 3; 
    }
    return 0;
}