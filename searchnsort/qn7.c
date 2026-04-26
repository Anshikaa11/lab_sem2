#include<stdio.h>
int partition(int a[],int l,int h){
    int pivot=a[l],i=l,j=h;
    while(i<j){
        while(a[i]<=pivot) i++;
        while(a[j]>pivot) j--;
        if(i<j){
            int t=a[i];a[i]=a[j];a[j]=t;
        }
    }
    int t=a[l];a[l]=a[j];a[j]=t;
    return j;
}
void quick(int a[],int l,int h){
    if(l<h){
        int p=partition(a,l,h);
        quick(a,l,p-1);
        quick(a,p+1,h);
    }
}
int main(){
    int n,a[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    quick(a,0,n-1);
    for(int i=0;i<n;i++) printf("%d ",a[i]);
}