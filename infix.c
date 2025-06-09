#include <stdio.h>
#include <conio.h>
#include <ctype.h>

void push(char);
char pop();
int priority(char);

char stk[100];
int top = -1;

int main() {
    char exp[100], *e, x;
    printf("Enter the infix expression: ");
    scanf("%s", exp);

    printf("Equivalent postfix is: ");
    e = exp;

    while (*e != '\0') {
        if (isalnum(*e))
            printf("%c", *e);
        else if (*e == '(')
            push(*e);
        else if (*e == ')') {
            while ((x = pop()) != '(')
                printf("%c", x);
        } else {
            while (top != -1 && priority(stk[top]) >= priority(*e))
                printf("%c", pop());
            push(*e);
        }
        e++;
    }

    while (top != -1)
        printf("%c", pop());

    printf("\n");
    
    return 0;
}

void push(char x) {
    if (top < 99)
        stk[++top] = x;
    else
        printf("Stack overflow");
}

char pop() {
    if (top == -1)
        return '\0';
    else
        return (stk[top--]);
}

int priority(char x) {
    if (x == '+' || x == '-')
        return 1;
    if (x == '*' || x == '/')
        return 2;
    if (x == '^')
        return 3;
    return 0;
}
