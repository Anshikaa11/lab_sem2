#include <stdio.h>
int findmax(int arr[], int n)
{
     if(n == 1)
          return arr[0];

     int max = findmax(arr, n-1);
     if(arr[n-1] > max)
          return arr[n-1];
     else
          return max;
}
int main()
{
     int arr[20], n, i, max;
     printf("Enter number of elements: ");
     scanf("%d", &n);
     printf("Enter elements:\n");
     for(i = 0; i < n; i++)
          scanf("%d", &arr[i]);

     max = findmax(arr, n);
     printf("Maximum element = %d", max);
     return 0;
}