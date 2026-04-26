#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int data;
    struct stack *next;
};
struct stack *push(struct stack *top, int val)
{
    struct stack *ptr;
    ptr = (struct stack*)malloc(sizeof(struct stack));
    ptr->data = val;
    ptr->next = top;
    top = ptr;
    return top;
}
int main()
{
    struct stack *top = NULL;
    top = push(top, 10);
    top = push(top, 20);
    top = push(top, 30);
    printf("Elements pushed successfully\n");
    return 0;
}