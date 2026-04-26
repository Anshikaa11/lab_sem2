#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *left,*right;
};
struct node* newNode(int val)
{
struct node *temp=(struct node*)malloc(sizeof(struct node));
temp->data=val;
temp->left=NULL;
temp->right=NULL;
return temp;
}
void deleteTree(struct node *root)
{
if(root)
{
deleteTree(root->left);
deleteTree(root->right);
free(root);
}
}
int main()
{
struct node *root=newNode(10);
root->left=newNode(20);
root->right=newNode(30);
deleteTree(root);
printf("Tree deleted");
return 0;
}