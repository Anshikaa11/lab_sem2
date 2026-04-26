// WAP to insert a number at a given location in an array.
#include <stdio.h>
int main() {
    int a[100], n, i, pos, num;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter position and number to insert: ");
    scanf("%d %d", &pos, &num);
    for(i = n; i >= pos; i--) {
        a[i] = a[i - 1];
    }
    a[pos - 1] = num;
    n++;
    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
