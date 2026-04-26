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
int height(struct node *root){
    if(root==NULL) return 0;
    int l=height(root->left);
    int r=height(root->right);
    return (l>r?l:r)+1;
}
int main(){
    struct node *root=newNode(1);
    printf("%d",height(root));
}
