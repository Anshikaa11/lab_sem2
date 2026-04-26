#include <stdio.h>
#define MAX 10
int st[MAX];
int top = -1;
void push(int st[], int val)
{
    if(top == MAX - 1)
    {
        printf("STACK OVERFLOW\n");
    }
    else
    {
        top++;
        st[top] = val;
        printf("Element inserted: %d\n", val);
    }
}
int main()
{
    push(st, 10);
    push(st, 20);
    push(st, 30);
    return 0;
}