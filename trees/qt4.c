#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left,*right;
};
int search(int in[], int start, int end, int val){
    for(int i=start;i<=end;i++)
        if(in[i]==val) return i;
    return -1;
}
struct node* build(int in[], int pre[], int start, int end, int *preIndex){
    if(start > end) return NULL;
    struct node *node = malloc(sizeof(struct node));
    node->data = pre[(*preIndex)++];
    node->left = node->right = NULL;
    if(start == end) return node;
    int pos = search(in,start,end,node->data);
    node->left = build(in,pre,start,pos-1,preIndex);
    node->right = build(in,pre,pos+1,end,preIndex);
    return node;
}
void inorder(struct node *root){
    if(root){
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}
int main(){
    int in[]={4,2,5,1,3};
    int pre[]={1,2,4,5,3};
    int n=5,preIndex=0;
    struct node *root = build(in,pre,0,n-1,&preIndex);
    inorder(root);
}