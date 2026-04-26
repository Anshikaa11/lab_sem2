#include <stdio.h>
#define MAX 10
int st[MAX];
int top = -1;
int pop(int st[])
{
    int val;
    if(top == -1)
    {
        printf("STACK UNDERFLOW\n");
        return -1;
    }
    else
    {
        val = st[top];
        top--;
        return val;
    }
}
int main()
{
    st[++top] = 10;
    st[++top] = 20;
    printf("Deleted element: %d\n", pop(st));
    return 0;
}