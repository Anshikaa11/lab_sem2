#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *insert_beg(struct node *start,int val)
{
    struct node *new_node;
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=val;
    new_node->next=start;
    start=new_node;
    return start;
}
