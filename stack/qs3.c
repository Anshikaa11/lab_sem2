#include <stdio.h>
#define MAX 10
int st[MAX];
int top = -1;
int peek(int st[])
{
    if(top == -1)
    {
        printf("STACK IS EMPTY\n");
        return -1;
    }
    else
    {
        return st[top];
    }
}
int main()
{
    st[++top] = 50;
    st[++top] = 100;
    printf("Top element: %d\n", peek(st));
    return 0;
}