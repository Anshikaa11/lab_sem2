#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int data;
    struct stack *next;
};
int peek(struct stack *top)
{
    if(top == NULL)
    {
        printf("Stack is empty\n");
        return -1;
    }
    else
        return top->data;
}
int main()
{
    struct stack *top;
    top = (struct stack*)malloc(sizeof(struct stack));
    top->data = 100;
    top->next = NULL;
    printf("Top element: %d\n", peek(top));
    return 0;
}