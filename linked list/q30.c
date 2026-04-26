#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *insert_end(struct node *start,int val)
{
    struct node *new_node,*ptr;
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=val;
    if(start==NULL)
    {
        new_node->next=new_node;
        return new_node;
    }
    ptr=start;
    while(ptr->next!=start)
        ptr=ptr->next;
    ptr->next=new_node;
    new_node->next=start;
    return start;
}
void display(struct node *start)
{
    struct node *ptr;
    if(start==NULL)
        return;
    ptr=start;
    do
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    while(ptr!=start);
}
int main()
{
    struct node *start=NULL;
    start=insert_end(start,10);
    start=insert_end(start,20);
    start=insert_end(start,30);
    printf("Circular list:\n");
    display(start);
    return 0;
}