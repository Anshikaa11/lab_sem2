// WAP to check whether array contains duplicate numbers.
#include <stdio.h>
int main() {
    int n, i, j, a[100], flag = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(a[i] == a[j]) {
                flag = 1;
                break;
            }
        }
    }
    if(flag)
        printf("Duplicate exists");
    else
        printf("No duplicate");
    return 0;
}
