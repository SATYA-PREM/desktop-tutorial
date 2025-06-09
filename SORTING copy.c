#include <stdio.h>
void bubblesort(int[]);
void selectionsort(int[]);
void insertionsort(int[]);
void quicksort(int[], int, int);
int partition(int[], int, int);
void mergesort(int[]);
void display(int[]);
int main()
{
    int ch, i, a[10];
    char c;
   
    printf("enter the elements:");
    for (i = 0; i < 10; i++)
    {
        scanf("\n%d", &a[i]);
    }
    do
    {
        printf("enetr 1 for bubble sort\n enter 2 fro selection sort\n enter 3 for insertion sort\n enetr 4 for quick sort\n enter 5 for merge sort\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            bubblesort(a);
            display(a);
            break;
        case 2:
            selectionsort(a);
            display(a);
            break;
        case 3:
            insertionsort(a);
            display(a);
            break;
        case 4:
            quicksort(a, 0, 9);
            display(a);
            break;
        case 5:
            mergesort(a);
            display(a);
            break;

        default:
            printf("worng choice");
            break;
        }
        printf("do you wann continue y or n");
        fflush(stdin);
        scanf("%c", &c);
    } while (c == 'y' || c == 'Y');
    
}
void bubblesort(int x[])
{
    int i,j,t;
    for(i=0;i<10;i++){
        for(j=0;j<10-i-1;j++){
            if(x[j]>x[j+1]){
                t=x[j];
                x[j]=x[j+1];            
                x[j+1]=t;
            }
        }
    }
}
void selectionsort(int x[])
{
    int i, j, min, loc;
    for (i = 0; i < 10; i++)
    {
        min = x[i];
        loc = i;
        for (j = i + 1; j < 10; j++)
        {
            if (min > x[j])
            {
                min = x[j];
                loc = j;
            }
        }
        if (loc !=i)
        {
            x[loc] = x[i];
            x[i] = min;
        }
    }
}
void insertionsort(int x[])
{
    int i, j, t;
    for (i = 1; i < 10; i++)
    {
        j = i - 1;
        t = x[i];
        while (t < x[j] && j > 0)
        {
            x[j + 1] = x[j];
            j--;
        }
        x[j + 1] = t;
    }
}
void quicksort(int x[], int lb, int ub)
{
    int j;
    if (lb < ub)
    {
        j = partition(x, lb, ub);
        quicksort(x, lb, j - 1);
        quicksort(x, j + 1, ub);
    }
}
int partition(int x[], int lb, int ub)
{
    int p, t, up, down;
    p = x[lb];
    // Corrected the pivot element assignment
    up = ub;
    down = lb;
    while (down < up)
    {
        while (x[down] <= p && down < up)
        { // Corrected the upper bound check
            down++;
        }
        while (x[up] > p)
        {
            up--;
        }
        if (down < up)
        { // Corrected the comparison operator
            t = x[down];
            x[down] = x[up];
            x[up] = t;
        }
    }
    x[lb] = x[up];
    x[up] = p; // Corrected the assignment of pivot element
    return up;
}
void display(int x[])
{
    printf("Sorted array: ");
    for (int i = 0; i < 10; i++)
    {
        printf("\n%d ", x[i]);
    }
}
void mergesort(int x[])
{
    int l1, l2, u1, u2, size, t[10], i, j, k;
    size = 1;

    while (size < 10)
    {
        l1 = 0;
        k = 0;

        while (l1 + size < 10)
        {
            l2 = l1 + size;
            u1 = l2 - 1;
            u2 = (l2 + size - 1 < 10) ? l2 + size - 1 : 9;

            for (i = l1, j = l2; i <= u1 && j <= u2; k++)
            {
                if (x[i] <= x[j])
                {
                    t[k] = x[i];
                    i++;
                }
                else
                {
                    t[k] = x[j];
                    j++;
                }
            }

            while (i <= u1)
            {
                t[k] = x[i];
                i++;
                k++;
            }

            while (j <= u2)
            {
                t[k] = x[j];
                j++;
                k++;
            }
            l1 = u2 + 1;
        }
        for (i = l1; k < 10; i++)
        {
            t[k] = x[i];
            k++;
        }
        for (i = 0; i <= 10; i++)
        {
            x[i] = t[i];
        }
        size *= 2;
    }
}