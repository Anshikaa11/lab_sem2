#include <stdio.h>
int fun(int);
int main()
{
    int n, result;
    printf("Enter a number: ");
    scanf("%d", &n);
    result = fun(n);
    printf("Result = %d", result);
    return 0;
}
int fun(int n)
{
    if(n <= 0)
        return 0;
    else
        return fun(fun(n - 1));
}