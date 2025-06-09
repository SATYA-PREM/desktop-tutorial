#include <stdio.h>
#include <stdlib.h>\

struct stk {
    int info;
    struct stk *next;
};

struct stk *top = NULL;
void push();
void pop();
void traverse();
int main()
{
    int ch;
    char c;
    do
    {
        printf("\nEnter 1 to push\nEnter 2 to pop\nEnter 3 to traverse\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            traverse();
            break;
        default:
            printf("Invalid choice\n");
        }
    printf("do you wann continue y or n");
        fflush(stdin);
        scanf("%c", &c);
    } while (c == 'y' || c == 'Y');
    
}
void push1() {
    struct stk *p;
    p = (struct stk*)malloc(sizeof(struct stk)); 
    printf("Enter an element:\n");
    scanf("%d", &p->info);
    if (top== NULL) {
        p->next = NULL;
        top=p;
    }else{
    p->next = top;
    top = p;
    }
}
void pop(){
    struct stk *p;
    if (top== NULL) {
        printf("stack is empty");
    }else{
        p=top;
        top=top->next;
        printf("element is poped\n");
        free(p);
    }
}
void traverse(){
struct stk *p;
if (top== NULL) {
        printf("stack is empty");
    }else{
        p=top;
        while (p!=NULL){
            printf("\n%d",p->info);
            p=p->next;
        }
    }  
}
