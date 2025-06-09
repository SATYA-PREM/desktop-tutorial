#include <stdio.h>
int stk[10], top = -1;
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
void push()
{
    int n;
    if (top == 4)
    {
        printf("Stack is full\n");
    }
    else
    {
        printf("Enter the value to push: ");
        scanf("%d", &n);
        top++;
        stk[top] = n;
        printf("element is inserted");
    }
}
void pop()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("%d is Popped \n", stk[top]);
        top--;
    }
}
void traverse()
{
    int i;
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Stack elements are:\n");
        for (i = top; i >= 0; i--)
        {
            printf("\n%d ", stk[i]);
        }
    }
}
