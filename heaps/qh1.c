#include<stdio.h>
int heap[100],n=0;
void insert(int val){
    int i=n++;
    heap[i]=val;
    while(i>0 && heap[(i-1)/2]<heap[i]){
        int t=heap[i];heap[i]=heap[(i-1)/2];heap[(i-1)/2]=t;
        i=(i-1)/2;
    }
}
void display(){
    for(int i=0;i<n;i++) printf("%d ",heap[i]);
}
int main(){
    insert(10);
    insert(30);
    insert(20);
    display();
}