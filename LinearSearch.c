#include<stdio.h>

int main() {

    int n, i, x, count = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d", &x);

    for (i = 0; i < n; i++) {
        if (a[i] == x) {
            count++;
            printf("Element is found at %d position\n", i + 1);
        }
    }

    if (count > 0) {
        printf("Element is found %d times\n", count);
    } else {
        printf("Element is not found\n");
    }

    return 0;
}
