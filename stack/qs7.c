#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int data;
    struct stack *next;
};
void display(struct stack *top)
{
    struct stack *ptr;
    if(top == NULL)
    {
        printf("Stack is empty\n");
        return;
    }
    ptr = top;
    while(ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}
int main()
{
    struct stack *top;
    struct stack *second;
    top = (struct stack*)malloc(sizeof(struct stack));
    second = (struct stack*)malloc(sizeof(struct stack));top->data = 10;
    top->next = second;
    second->data = 20;
    second->next = NULL;
    display(top);
    return 0;
}