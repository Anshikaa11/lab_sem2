// WAP to find second largest number in an array.
#include <stdio.h>
int main() {
    int n, i, a[100], largest, second;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    largest = second = -9999;
    for(i = 0; i < n; i++) {
        if(a[i] > largest) {
            second = largest;
            largest = a[i];
        } else if(a[i] > second && a[i] != largest) {
            second = a[i];
        }
    }
    printf("Second largest = %d", second);
    return 0;
}

