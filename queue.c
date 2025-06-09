#include <stdio.h>
#include <conio.h>

int Q[5], F = -1, R = -1;

void insert();
void deletion();
void traverse();

void main() {
    int ch;
    char c;
    
    do {
        printf("Enter your choice");
        printf("\n 1 for insertion");
        printf("\n 2 for deletion");
        printf("\n 3 for traverse");
        fflush(stdin);
        scanf("%d", &ch);
        
        switch(ch) {
            case 1: insert(); break;
            case 2: deletion(); break;
            case 3: traverse(); break;
            default: printf("Invalid choice");
        }
        
        printf("\nDo you want to continue? (y/n): ");
        fflush(stdin);
        scanf(" %c", &c);
    } while (c == 'y' || c == 'Y');
    
}

void insert() {
    int n;
    if ((R == 4 && F == 0) || (R + 1 == F)) {
        printf("Queue is full");
        return;
    }
    
    printf("Enter the element to be inserted: ");
    scanf("%d", &n);
    
    if (R == -1)
        F = R = 0;
    else if (R == 4)
        R = 0;
    else
        R++;
    
    Q[R] = n;
    printf("Element inserted");
}

void deletion() {
    int n;
    if (R == -1) {
        printf("Queue is empty");
    } else {
        n = Q[F];
        printf("%d is deleted", n);
        
        if (F == R)
            F = R = -1;
        else if (F == 4)
            F = 0;
        else
            F++;
    }
}

void traverse() {
    int i;
    if (R == -1) {
        printf("Queue is empty");
    } else {
        if (F <= R) {
            for (i = F; i <= R; i++) {
                printf("%d ", Q[i]);
            }
        } else {
            for (i = F; i < 5; i++) {
                printf("%d ", Q[i]);
            }
            for (i = 0; i <= R; i++) {
                printf("%d ", Q[i]);
            }
        }
    }
}
