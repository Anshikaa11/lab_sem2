// WAP to insert a number at a given location in an array.
#include <stdio.h>
int main() {
    int n, i, pos, num, a[100];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter position and number: ");
    scanf("%d %d", &pos, &num);
    for(i = n; i >= pos; i--) {
        a[i] = a[i - 1];
    }
    a[pos - 1] = num;
    n++;
    printf("Updated array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
} 