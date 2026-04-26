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
int findMax(struct node *root){
    while(root->right!=NULL) root=root->right;
    return root->data;
}
int main(){
    struct node *root=newNode(10);
    root->right=newNode(20);
    printf("%d",findMax(root));
}