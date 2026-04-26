// WAP to insert a number into a sorted array (ascending order).
#include <stdio.h>
int main() {
    int n, i, num, a[100];
    printf("Enter number of elements: ");
    scanf("%d", &n);
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
    printf("Updated sorted array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
