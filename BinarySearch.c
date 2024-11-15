#include<stdio.h>
int main() {

    int i, n, x, flag = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n], mid, left = 0, right = n - 1;

    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d", &x);

    while (left <= right) {
        mid = (left + right) / 2;

        if (x == a[mid]) {
            flag = 1;
            break;
        } else if (x > a[mid]) {
            left = mid + 1;
        } else if (x < a[mid]) {
            right = mid - 1;
        }
    }

    if (flag == 0) {
        printf("Element not found\n");
    } else if (flag == 1) {
        printf("Element found at location %d\n", mid + 1);
    }

    return 0;
}
