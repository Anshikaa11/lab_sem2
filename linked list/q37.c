#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *insert_beg(struct node *start,int val)
{
    struct node *new_node;
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=val;
    new_node->prev=NULL;
    new_node->next=start;
    if(start!=NULL)
        start->prev=new_node;
    start=new_node;
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
    start=insert_beg(start,30);
    start=insert_beg(start,20);
    start=insert_beg(start,10);
    printf("Doubly linked list:\n");
    display(start);
    return 0;
}