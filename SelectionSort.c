#include<stdio.h>
void main()
{
    int i = 0, j, n, small, a[100], temp;

    printf("Enter the no. of elements");
    scanf("%d", &n);

    printf("Enter the elements");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        small = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[small])
            {
                small = j;
            }
        }
        if (small != i)
        {
            temp = a[i];
            a[i] = a[small];
            a[small] = temp;
        }
    }

    printf("Sorted List is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d \t", a[i]);
    }
    printf("\n");
}
