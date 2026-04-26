#include<stdio.h>
int heap[100],n;
void heapify(int i,int size){
int largest=i,l=2*i+1,r=2*i+2;
if(l<size && heap[l]>heap[largest]) largest=l;
if(r<size && heap[r]>heap[largest]) largest=r;
if(largest!=i){
int t=heap[i];heap[i]=heap[largest];heap[largest]=t;
heapify(largest,size);
}
}
void heapsort(){
for(int i=n/2-1;i>=0;i--) heapify(i,n);
for(int i=n-1;i>=0;i--){
int t=heap[0];heap[0]=heap[i];heap[i]=t;
heapify(0,i);
}
}
int main(){
scanf("%d",&n);
for(int i=0;i<n;i++) scanf("%d",&heap[i]);
heapsort();
for(int i=0;i<n;i++) printf("%d ",heap[i]);
return 0;
}