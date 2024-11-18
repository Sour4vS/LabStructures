#include<stdio.h>
void main()
{
    int i = 0, j, n, min, a[100], temp;

    printf("Enter the no. of elements");
    scanf("%d", &n);

    printf("Enter the elements");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }

    printf("Sorted List is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d \t", a[i]);
    }
    printf("\n");
}

  
