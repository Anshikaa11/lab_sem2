#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
    char data;
    struct node *left,*right;
};
struct node* newNode(char c){
    struct node *n = malloc(sizeof(struct node));
    n->data = c;
    n->left = n->right = NULL;
    return n;
}
int isOp(char c){
    return(c=='+'||c=='-'||c=='*'||c=='/');
}
struct node* build(char postfix[]){
    struct node *stack[100];
    int top=-1;
    for(int i=0;i<strlen(postfix);i++){
        if(!isOp(postfix[i]))
            stack[++top]=newNode(postfix[i]);
        else{
            struct node *n=newNode(postfix[i]);
            n->right=stack[top--];
            n->left=stack[top--];
            stack[++top]=n;
        }
    }
    return stack[top];
}
void inorder(struct node *root){
    if(root){
        inorder(root->left);
        printf("%c ",root->data);
        inorder(root->right);
    }
}
int main(){
    char postfix[]="ab+c*";
    struct node *root=build(postfix);
    inorder(root);
}