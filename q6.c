// Finding maximum using pointers.
#include <stdio.h>
int main() {
    int n, i;
    int arr[100];
    int *p, max;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    p = arr;
    max = *p;
    for (i = 1; i < n; i++) {
        if (*(p + i) > max)
            max = *(p + i);
    }
    printf("Maximum = %d", max);
    return 0;
}
