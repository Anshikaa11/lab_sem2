#include <stdio.h>
void display(int arr[], int n)
{
     if(n == 0)
          return;
     display(arr, n-1);
     printf("%d ", arr[n-1]);
}
int main()
{
     int arr[20], n, i;
     printf("Enter number of elements: ");
     scanf("%d", &n);
     printf("Enter elements:\n");
     for(i = 0; i < n; i++)
          scanf("%d", &arr[i]);
     printf("Array elements are:\n");
     display(arr, n);
     return 0;
}