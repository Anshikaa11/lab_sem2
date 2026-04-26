#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *insert_end(struct node *start,int val)
{
    struct node *ptr,*new_node;
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=val;
    new_node->next=NULL;
    if(start==NULL)
    {
        new_node->prev=NULL;
        return new_node;
    }
    ptr=start;
    while(ptr->next!=NULL)
        ptr=ptr->next;
    ptr->next=new_node;
    new_node->prev=ptr;
    return start;
}
void display(struct node *start)
{
    while(start!=NULL)
    {
        printf("%d ",start->data);
        start=start->next;
    }
}
int main()
{
    struct node *start=NULL;
    start=insert_end(start,10);
    start=insert_end(start,20);
    start=insert_end(start,30);
    printf("Doubly linked list:\n");
    display(start);
    return 0;
}