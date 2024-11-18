#include <stdio.h>

void main() {
    int i, j, n, temp;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n]; 

    printf("Enter the elements: \n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Bubble sort algorithm
    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-i-1; j++) {
            if(a[j] > a[j+1]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    printf("The sorted elements are: \n");
    for(i = 0; i < n; i++){
        printf("%d\t", a[i]);
    }
    printf("\n");
}
