#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *insert_beg(struct node *start,int val)
{
    struct node *new_node,*ptr;
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=val;
    if(start==NULL)
    {
        new_node->next=new_node;
        start=new_node;
        return start;
    }
    ptr=start;
    while(ptr->next!=start)
        ptr=ptr->next;
    new_node->next=start;
    ptr->next=new_node;
    start=new_node;
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
    start=insert_beg(start,30);
    start=insert_beg(start,20);
    start=insert_beg(start,10);
    printf("Circular list:\n");
    display(start);
    return 0;
}