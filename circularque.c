#include <stdio.h>
#include <conio.h>

int q[5], f = -1, r = -1;

void insert();
void deletion();
void traverse();

void main() {
    int ch;
    char c;
    
    do {
        printf("Enter your choice:\n1 for insertion\n2 for deletion\n3 for traverse");
        scanf("%d", &ch);
        
        switch(ch) {
        case 1: 
            insert();
            break;
        case 2: 
            deletion();
            break;
        case 3: 
            traverse();
            break;
        default: 
            printf("Invalid choice");
        }
        printf("\nDo you want to continue (y/n)? ");
        fflush(stdin);
        scanf(" %c", &c);
    } while (c == 'y');
}
void insert() {
    int n;
    if (f==(r+1)%5) {
        printf("Queue is full\n");
        return;
    }
    
    printf("Enter an element: ");
    scanf("%d", &n);
    
    if (r == -1)
        f = r = 0;
    else
        r = (r + 1) % 5;
    
    q[r] = n;
    printf("Element is inserted\n");
}
void deletion() {
    int n;
    if (f == -1) {
        printf("Queue is empty\n");
    } else {
        n = q[f];
        printf("%d is deleted\n", n);
        
        if (f == r)
            f = r = -1;
        else
            f = (f + 1) % 5;
    }
}
void traverse() {
    int i;
    if (f == -1) {
        printf("Queue is empty\n");
    } else {
        for (i = f; i != r; i = (i + 1) % 5)
            printf("%d ", q[i]);
        printf("%d\n", q[i]);
    }
}
