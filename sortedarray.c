#include <stdio.h>

int main()
{
    int i, j, k, a[5], b[5] ,c[10];
    printf("enter the sorted elements in array a:");
    for (i = 0; i <5; i++)
    {
        scanf("\n%d", &a[i]);
    }
    printf("\nenter the sorted elements in array b:");
    for (i = 0; i < 5; i++)
    {
        scanf("\n%d", &b[i]);
    }
    i = 0, j = 0, k = 0;
    while (i < 5 && j < 5)
    {
        if (a[i] <= b[j])
        {
            c[k++] = a[i++];
        }
        else
        {
            c[k++] = b[j++];
        }
    }
    while (i < 5)
    {
        c[k++] = a[i++];
    }
    while (j < 5)
    {
        c[k++] = b[j++];
    }
    printf("\nMerged array is:\n");
    for (i = 0; i < 10; i++)
    {
        printf("\n%d ", c[i]);
    }
    printf("\n");
return 0;
}