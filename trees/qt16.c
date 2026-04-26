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
struct node* search(struct node *root,int key){
    if(root==NULL || root->data==key) return root;
    if(key<root->data) return search(root->left,key);
    return search(root->right,key);
}
int main(){
    struct node *root=newNode(10);
    if(search(root,10)) printf("Found");
}
