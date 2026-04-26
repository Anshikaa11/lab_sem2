// Resize array realloc()
#include <stdio.h>
#include <stdlib.h>
int main() {
    int *arr, i;
    arr = (int *)malloc(5 * sizeof(int));
    for (i = 0; i < 5; i++)
        arr[i] = i + 1;
    arr = (int *)realloc(arr, 10 * sizeof(int));
    for (i = 5; i < 10; i++)
        arr[i] = i + 1;
    for (i = 0; i < 10; i++)
        printf("%d ", arr[i]);
    free(arr);
    return 0;
}
