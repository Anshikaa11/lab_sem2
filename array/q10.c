// WAP to find mean of n numbers using array.
#include <stdio.h>
int main() {
    int n, i, a[100];
    float sum = 0, mean;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    mean = sum / n;
    printf("Mean = %.2f", mean);
    return 0;
}
