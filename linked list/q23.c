#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *insert_end(struct node *start,int val)
{
    struct node *ptr,*new_node;
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=val;
    new_node->next=NULL;
    if(start==NULL)
        return new_node;
    ptr=start;
    while(ptr->next!=NULL)
        ptr=ptr->next;
    ptr->next=new_node;
    return start;
}
struct node *insert_after(struct node *start)
{
    struct node *ptr,*new_node;
    int val,data;
    printf("Enter value after which node inserted: ");
    scanf("%d",&data);
    printf("Enter value to insert: ");
    scanf("%d",&val);
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=val;
    ptr=start;
    while(ptr->data!=data)
        ptr=ptr->next;
    new_node->next=ptr->next;
    ptr->next=new_node;
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
    printf("Original list:\n");
    display(start);
    start=insert_after(start);
    printf("\nUpdated list:\n");
    display(start);
    return 0;
}