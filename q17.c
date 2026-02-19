// WAP to insert a number in an array already sorted in ascending order.
#include <stdio.h>
int main() {
    int a[100], n, i, num;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter sorted elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter number to insert: ");
    scanf("%d", &num);
    for(i = n - 1; i >= 0 && a[i] > num; i--) {
        a[i + 1] = a[i];
    }
    a[i + 1] = num;
    n++;
    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}