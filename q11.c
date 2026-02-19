// WAP to print position of smallest number in an array.
#include <stdio.h>
int main() {
    int n, i, a[100], min, pos = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    min = a[0];
    for(i = 1; i < n; i++) {
        if(a[i] < min) {
            min = a[i];
            pos = i;
        }
    }
    printf("Smallest element is at position %d", pos + 1);
    return 0;
}
