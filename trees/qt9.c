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
int leafCount(struct node *root){
    if(root==NULL) return 0;
    if(root->left==NULL && root->right==NULL) return 1;
    return leafCount(root->left)+leafCount(root->right);
}
int main(){
    struct node *root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    printf("%d",leafCount(root));
}