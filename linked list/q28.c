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
struct node *delete_before(struct node *start)
{
    struct node *ptr,*temp;
    int val;
    printf("Enter value before which node deleted: ");
    scanf("%d",&val);
    ptr=start;
    while(ptr->next->data!=val)
        ptr=ptr->next;
    temp=ptr->next;
    ptr->next=temp->next;
    free(temp);
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
    start=insert_end(start,40);
    printf("Original list:\n");
    display(start);
    start=delete_before(start);
    printf("\nUpdated list:\n");
    display(start);
    return 0;
}