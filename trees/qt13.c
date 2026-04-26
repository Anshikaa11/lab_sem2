#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left,*right;
};
struct node* newNode(int val){
    struct node *n=malloc(sizeof(struct node));
    n->data=val;
    n->left=n->right=NULL;
    return n;
}
int findMin(struct node *root){
    while(root->left!=NULL) root=root->left;
    return root->data;
}
int main(){
    struct node *root=newNode(10);
    root->left=newNode(5);
    printf("%d",findMin(root));
}