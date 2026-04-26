#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int data;
    struct stack *next;
};
struct stack *pop(struct stack *top)
{
    struct stack *ptr;
    if(top == NULL)
    {
        printf("STACK UNDERFLOW\n");
    }
    else
    {
        ptr = top;
        printf("Deleted element: %d\n", ptr->data);
        top = top->next;
        free(ptr);
    }
    return top;
}
int main()
{
    struct stack *top = NULL;
    top = (struct stack*)malloc(sizeof(struct stack));
    top->data = 50;
    top->next = NULL;
    top = pop(top);
    return 0;
}