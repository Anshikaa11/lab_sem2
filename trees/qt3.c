#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left,*right;
};
struct node* newNode(int val){
    struct node *n = malloc(sizeof(struct node));
    n->data = val;
    n->left = n->right = NULL;
    return n;
}
void levelOrder(struct node *root){
    struct node *queue[100];
    int front = 0, rear = 0;
    queue[rear++] = root;
    while(front < rear){
        struct node *temp = queue[front++];
        printf("%d ", temp->data);
        if(temp->left) queue[rear++] = temp->left;
        if(temp->right) queue[rear++] = temp->right;
    }
}
int main(){
    struct node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    levelOrder(root);
}